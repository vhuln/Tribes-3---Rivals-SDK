#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// Function BP_NoClipSpectatorPawn.BP_NoClipSpectatorPawn_C.InpActEvt_FastFly_K2Node_InputActionEvent_1
struct ABP_NoClipSpectatorPawn_C_InpActEvt_FastFly_K2Node_InputActionEvent_1_Params
{
public:
	struct InputCore_Key                         Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_NoClipSpectatorPawn.BP_NoClipSpectatorPawn_C.InpActEvt_FastFly_K2Node_InputActionEvent_0
struct ABP_NoClipSpectatorPawn_C_InpActEvt_FastFly_K2Node_InputActionEvent_0_Params
{
public:
	struct InputCore_Key                         Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0xC8 (0xC8 - 0x0)
// Function BP_NoClipSpectatorPawn.BP_NoClipSpectatorPawn_C.ExecuteUbergraph_BP_NoClipSpectatorPawn
struct ABP_NoClipSpectatorPawn_C_ExecuteUbergraph_BP_NoClipSpectatorPawn_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AA1[0x4];                                     // Fixing Size After Last Property  
	struct InputCore_Key                         K2Node_InputActionEvent_Key_1;                     // 0x8(0x18)(HasGetValueTypeHash)
	class UPawnMovementComponent*                CallFunc_GetMovementComponent_ReturnValue;         // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USpectatorPawnMovement*                K2Node_DynamicCast_AsSpectator_Pawn_Movement;      // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AA6[0x7];                                     // Fixing Size After Last Property  
	class UPawnMovementComponent*                CallFunc_GetMovementComponent_ReturnValue_1;       // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USpectatorPawnMovement*                K2Node_DynamicCast_AsSpectator_Pawn_Movement_1;    // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AAA[0x7];                                     // Fixing Size After Last Property  
	class UPawnMovementComponent*                CallFunc_GetMovementComponent_ReturnValue_2;       // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USpectatorPawnMovement*                K2Node_DynamicCast_AsSpectator_Pawn_Movement_2;    // 0x60(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AB1[0x3];                                     // Fixing Size After Last Property  
	float                                        CallFunc_GetMaxSpeed_ReturnValue;                  // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct InputCore_Key                         Temp_struct_Variable;                              // 0x70(0x18)(HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct InputCore_Key                         K2Node_InputActionEvent_Key;                       // 0x90(0x18)(HasGetValueTypeHash)
	float                                        K2Node_VariableSet_MaxSpeed_ImplicitCast;          // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_VariableSet_MaxSpeed_ImplicitCast_1;        // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_DefaultAccel_ImplicitCast;      // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_DefaultMovementSpeed_ImplicitCast; // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_VariableSet_Acceleration_ImplicitCast;      // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_VariableSet_Acceleration_ImplicitCast_1;    // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


