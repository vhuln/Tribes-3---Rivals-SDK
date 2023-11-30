#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function WBP_SettingsSection.WBP_SettingsSection_C.Add Settings Group Widget
struct UWBP_SettingsSection_C_Add_Settings_Group_Widget_Params
{
public:
	class URHSettingsGroup*                      Settings_Group_Widget;                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_SettingsSection.WBP_SettingsSection_C.PreConstruct
struct UWBP_SettingsSection_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_SettingsSection.WBP_SettingsSection_C.AddSettingsGroupWidget
struct UWBP_SettingsSection_C_AddSettingsGroupWidget_Params
{
public:
	class URHSettingsGroup*                      SettingsGroup;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function WBP_SettingsSection.WBP_SettingsSection_C.ExecuteUbergraph_WBP_SettingsSection
struct UWBP_SettingsSection_C_ExecuteUbergraph_WBP_SettingsSection_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_213C[0x4];                                     // Fixing Size After Last Property  
	class FText                                  CallFunc_GetHeading_ReturnValue;                   // 0x8(0x18)(ConstParm)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_213F[0x7];                                     // Fixing Size After Last Property  
	class URHSettingsGroup*                      K2Node_Event_SettingsGroup;                        // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFontByName_HasFound;                   // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2140[0x7];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateFontInfo               CallFunc_GetFontByName_FontInfo;                   // 0x38(0x58)(HasGetValueTypeHash)
};

}
}


