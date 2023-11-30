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
// Function WBP_SettingsGroup.WBP_SettingsGroup_C.Add Sub Settings Widget
struct UWBP_SettingsGroup_C_Add_Sub_Settings_Widget_Params
{
public:
	class URHSettingsContainer*                  Settings_Container;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_SettingsGroup.WBP_SettingsGroup_C.Add Main Settings Widget
struct UWBP_SettingsGroup_C_Add_Main_Settings_Widget_Params
{
public:
	class URHSettingsContainer*                  Settings_Container;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function WBP_SettingsGroup.WBP_SettingsGroup_C.AddSettingsWidget
struct UWBP_SettingsGroup_C_AddSettingsWidget_Params
{
public:
	class URHSettingsContainer*                  Settings_Container;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UVerticalBox*                          Vertical_Box;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Settings_Widget_Container;                         // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct SlateCore_Margin                      K2Node_MakeStruct_Margin;                          // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_SettingsGroup.WBP_SettingsGroup_C.AddSubSettingsContainerWidget
struct UWBP_SettingsGroup_C_AddSubSettingsContainerWidget_Params
{
public:
	class URHSettingsContainer*                  SettingsContainer;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_SettingsGroup.WBP_SettingsGroup_C.AddMainSettingsContainerWidget
struct UWBP_SettingsGroup_C_AddMainSettingsContainerWidget_Params
{
public:
	class URHSettingsContainer*                  SettingsContainer;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x26 (0x26 - 0x0)
// Function WBP_SettingsGroup.WBP_SettingsGroup_C.ExecuteUbergraph_WBP_SettingsGroup
struct UWBP_SettingsGroup_C_ExecuteUbergraph_WBP_SettingsGroup_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3587[0x4];                                     // Fixing Size After Last Property  
	class URHSettingsContainer*                  K2Node_Event_SettingsContainer;                    // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_358C[0x5];                                     // Fixing Size After Last Property  
	class URHSettingsContainer*                  K2Node_Event_SettingsContainer_1;                  // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


