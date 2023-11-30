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
// Function WBP_SettingsContainer.WBP_SettingsContainer_C.GetPreviewWidget
struct UWBP_SettingsContainer_C_GetPreviewWidget_Params
{
public:
	class URHWidget*                             PreviewWidget;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_SettingsContainer.WBP_SettingsContainer_C.Add Setting Widget To Box
struct UWBP_SettingsContainer_C_Add_Setting_Widget_To_Box_Params
{
public:
	class URHSettingsWidget*                     Setting_Widget;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_SettingsContainer.WBP_SettingsContainer_C.AddSettingsWidget
struct UWBP_SettingsContainer_C_AddSettingsWidget_Params
{
public:
	class URHSettingsWidget*                     SettingsWidget;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function WBP_SettingsContainer.WBP_SettingsContainer_C.OnMouseEnter
struct UWBP_SettingsContainer_C_OnMouseEnter_Params
{
public:
	struct SlateCore_Geometry                    MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct SlateCore_PointerEvent                MouseEvent;                                        // 0x38(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x78 (0x78 - 0x0)
// Function WBP_SettingsContainer.WBP_SettingsContainer_C.OnMouseLeave
struct UWBP_SettingsContainer_C_OnMouseLeave_Params
{
public:
	struct SlateCore_PointerEvent                MouseEvent;                                        // 0x0(0x78)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function WBP_SettingsContainer.WBP_SettingsContainer_C.AddPreviewWidget
struct UWBP_SettingsContainer_C_AddPreviewWidget_Params
{
public:
	class URHSettingsPreview*                    PreviewWidget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x168 (0x168 - 0x0)
// Function WBP_SettingsContainer.WBP_SettingsContainer_C.ExecuteUbergraph_WBP_SettingsContainer
struct UWBP_SettingsContainer_C_ExecuteUbergraph_WBP_SettingsContainer_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_385E[0x4];                                     // Fixing Size After Last Property  
	class FText                                  CallFunc_GetSettingName_ReturnValue;               // 0x8(0x18)(ConstParm)
	class URHSettingsWidget*                     K2Node_Event_SettingsWidget;                       // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct SlateCore_Geometry                    K2Node_Event_MyGeometry;                           // 0x28(0x38)(IsPlainOldData, NoDestructor)
	struct SlateCore_PointerEvent                K2Node_Event_MouseEvent_1;                         // 0x60(0x78)(ConstParm)
	struct SlateCore_PointerEvent                K2Node_Event_MouseEvent;                           // 0xD8(0x78)(ConstParm)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x150(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x158(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URHSettingsPreview*                    K2Node_Event_PreviewWidget;                        // 0x160(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_SettingsContainer.WBP_SettingsContainer_C.OnAddToPreview__DelegateSignature
struct UWBP_SettingsContainer_C_OnAddToPreview__DelegateSignature_Params
{
public:
	class URHWidget*                             PreviewWidget;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


