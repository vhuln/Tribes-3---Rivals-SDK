#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x98 - 0x0)
// Function ObjectiveOverlay.ObjectiveOverlay_C.UpdateProgress
struct UObjectiveOverlay_C_UpdateProgress_Params
{
public:
	double                                       Value;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D50[0x4];                                     // Fixing Size After Last Property  
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct Engine_FormatArgumentData             K2Node_MakeStruct_FormatArgumentData;              // 0x20(0x50)(HasGetValueTypeHash)
	TArray<struct Engine_FormatArgumentData>     K2Node_MakeArray_Array;                            // 0x70(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x80(0x18)(None)
};

// 0x98 (0x98 - 0x0)
// Function ObjectiveOverlay.ObjectiveOverlay_C.GetStateHelpText
struct UObjectiveOverlay_C_GetStateHelpText_Params
{
public:
	enum class EObjectiveState                   State;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D6A[0x7];                                     // Fixing Size After Last Property  
	class FText                                  Text;                                              // 0x8(0x18)(Parm, OutParm)
	bool                                         Temp_bool_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D6C[0x7];                                     // Fixing Size After Last Property  
	class FText                                  CallFunc_Map_Find_Value;                           // 0x28(0x18)(None)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D6E[0x7];                                     // Fixing Size After Last Property  
	class FText                                  CallFunc_Map_Find_Value_1;                         // 0x48(0x18)(None)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D7A[0x7];                                     // Fixing Size After Last Property  
	class FText                                  K2Node_Select_Default;                             // 0x68(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x80(0x18)(None)
};

// 0x4C (0x4C - 0x0)
// Function ObjectiveOverlay.ObjectiveOverlay_C.GetStateColor
struct UObjectiveOverlay_C_GetStateColor_Params
{
public:
	enum class EObjectiveState                   State;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D98[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               Color;                                             // 0x4(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_LinearColor               CallFunc_Map_Find_Value;                           // 0x14(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DA9[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               CallFunc_Map_Find_Value_1;                         // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DB1[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               CallFunc_SelectColor_ReturnValue;                  // 0x3C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function ObjectiveOverlay.ObjectiveOverlay_C.UpdateDisplay
struct UObjectiveOverlay_C_UpdateDisplay_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DD8[0x6];                                     // Fixing Size After Last Property  
	class UWidgetAnimation*                      K2Node_Select_Default;                             // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1DDB[0x7];                                     // Fixing Size After Last Property  
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function ObjectiveOverlay.ObjectiveOverlay_C.UpdateEnemy
struct UObjectiveOverlay_C_UpdateEnemy_Params
{
public:
	int32                                        TeamNum;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E18[0x4];                                     // Fixing Size After Last Property  
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetTeamFromObject_bHasATeam;              // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E1E[0x2];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_GetTeamFromObject_TeamId;                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function ObjectiveOverlay.ObjectiveOverlay_C.UpdateState
struct UObjectiveOverlay_C_UpdateState_Params
{
public:
	enum class EObjectiveState                   State;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E70[0x3];                                     // Fixing Size After Last Property  
	int32                                        TeamNum;                                           // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E74[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               CallFunc_GetStateColor_Color;                      // 0xC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct SlateCore_SlateColor                  K2Node_MakeStruct_SlateColor;                      // 0x1C(0x14)(None)
	class FText                                  CallFunc_GetStateHelpText_Text;                    // 0x30(0x18)(None)
};

// 0x4 (0x4 - 0x0)
// Function ObjectiveOverlay.ObjectiveOverlay_C.OnUpdateVisibility
struct UObjectiveOverlay_C_OnUpdateVisibility_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Hovered;                                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bClose;                                            // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShowHealthBar;                                    // 0x3(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ObjectiveOverlay.ObjectiveOverlay_C.ExecuteUbergraph_ObjectiveOverlay
struct UObjectiveOverlay_C_ExecuteUbergraph_ObjectiveOverlay_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Visible;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_Hovered;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bClose;                               // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bShowHealthBar;                       // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


