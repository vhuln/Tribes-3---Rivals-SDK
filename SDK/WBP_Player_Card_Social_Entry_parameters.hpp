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
// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnRhPlayerInfoUpdated
struct UWBP_Player_Card_Social_Entry_C_OnRhPlayerInfoUpdated_Params
{
public:
	class URH_RHFriendAndPlatformFriend*         Friend;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x33 (0x33 - 0x0)
// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.SetCurrentInfoContainer
struct UWBP_Player_Card_Social_Entry_C_SetCurrentInfoContainer_Params
{
public:
	class UObject*                               InfoContainer;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x18(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URHDataSocialPlayer*                   K2Node_DynamicCast_AsRHData_Social_Player;         // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.SetHoverState
struct UWBP_Player_Card_Social_Entry_C_SetHoverState_Params
{
public:
	bool                                         IsHovered;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.GetDisplayItem
struct UWBP_Player_Card_Social_Entry_C_GetDisplayItem_Params
{
public:
	class URHWidget*                             ActiveDisplayItem;                                 // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.UpdateDataItem
struct UWBP_Player_Card_Social_Entry_C_UpdateDataItem_Params
{
public:
	class UObject*                               Data;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URHDataSocialPlayer*                   K2Node_DynamicCast_AsRHData_Social_Player;         // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_390B[0x7];                                     // Fixing Size After Last Property  
	class URH_RHFriendAndPlatformFriend*         CallFunc_GetFriend_ReturnValue;                    // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_392E[0x7];                                     // Fixing Size After Last Property  
	class UListViewBase*                         CallFunc_GetOwningListView_ReturnValue;            // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class URHTreeView*                           K2Node_DynamicCast_AsRHTree_View;                  // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsItemExpanded_ReturnValue;               // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3944[0x6];                                     // Fixing Size After Last Property  
	class URHDataSocialCategory*                 K2Node_DynamicCast_AsRHData_Social_Category;       // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.BP_OnItemSelectionChanged
struct UWBP_Player_Card_Social_Entry_C_BP_OnItemSelectionChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.BP_OnItemExpansionChanged
struct UWBP_Player_Card_Social_Entry_C_BP_OnItemExpansionChanged_Params
{
public:
	bool                                         bIsExpanded;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnListItemObjectSet
struct UWBP_Player_Card_Social_Entry_C_OnListItemObjectSet_Params
{
public:
	class UObject*                               ListItemObject;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnHeaderClicked
struct UWBP_Player_Card_Social_Entry_C_OnHeaderClicked_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnPlayerClicked
struct UWBP_Player_Card_Social_Entry_C_OnPlayerClicked_Params
{
public:
	class UWBP_player_card_module_C*             Selected_Player_Card;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnMouseEnter
struct UWBP_Player_Card_Social_Entry_C_OnMouseEnter_Params
{
public:
	struct SlateCore_Geometry                    MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct SlateCore_PointerEvent                MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x78 (0x78 - 0x0)
// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnMouseLeave
struct UWBP_Player_Card_Social_Entry_C_OnMouseLeave_Params
{
public:
	struct SlateCore_PointerEvent                MouseEvent;                                        // 0x0(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1AA (0x1AA - 0x0)
// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.ExecuteUbergraph_WBP_Player_Card_Social_Entry
struct UWBP_Player_Card_Social_Entry_C_ExecuteUbergraph_WBP_Player_Card_Social_Entry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E5F[0x4];                                     // Fixing Size After Last Property  
	class UObject*                               K2Node_Event_ListItemObject;                       // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           K2Node_CustomEvent_Widget;                         // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IUserListEntry>       CallFunc_GetOwningListView_UserListEntry_CastInput; // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UListViewBase*                         CallFunc_GetOwningListView_ReturnValue;            // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsExpanded_Expanded;                   // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E85[0x7];                                     // Fixing Size After Last Property  
	class UTreeView*                             K2Node_DynamicCast_AsTree_View;                    // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E90[0x6];                                     // Fixing Size After Last Property  
	class URHDataSocialCategory*                 CallFunc_GetData_NewParam;                         // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsExpanded;                          // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsSelected;                          // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E99[0x2];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x64(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EA2[0x4];                                     // Fixing Size After Last Property  
	class UWBP_player_card_module_C*             K2Node_CustomEvent_Selected_Player_Card;           // 0x78(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct SlateCore_Geometry                    K2Node_Event_MyGeometry;                           // 0x80(0x38)(IsPlainOldData, NoDestructor)
	struct SlateCore_PointerEvent                K2Node_Event_MouseEvent_1;                         // 0xB8(0x78)(ConstParm)
	struct SlateCore_PointerEvent                K2Node_Event_MouseEvent;                           // 0x130(0x78)(ConstParm)
	enum class ERH_INPUT_STATE                   CallFunc_GetCurrentInputState_ReturnValue;         // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C.OnClicked__DelegateSignature
struct UWBP_Player_Card_Social_Entry_C_OnClicked__DelegateSignature_Params
{
public:
	class UUserWidget*                           Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


