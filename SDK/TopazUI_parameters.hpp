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
// Function TopazUI.TopRHWidget_WheelSelector.UpdateRadialSelector
struct UTopRHWidget_WheelSelector_UpdateRadialSelector_Params
{
public:
	float                                        Angle;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShow;                                             // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F6D[0x3];                                      // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// Function TopazUI.TopRHWidget_WheelSelector.ToggleLockLookInput
struct UTopRHWidget_WheelSelector_ToggleLockLookInput_Params
{
public:
	bool                                         bLock;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function TopazUI.TopRHWidget_WheelSelector.OnIndexChanged
struct UTopRHWidget_WheelSelector_OnIndexChanged_Params
{
public:
	int32                                        NewIndex;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function TopazUI.TopRHWidget_WheelSelector.GetRadialSelectionMouse
struct UTopRHWidget_WheelSelector_GetRadialSelectionMouse_Params
{
public:
	float                                        InMouseDeadzone;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OUTAngle;                                          // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TopazUI.TopRHWidget_WheelSelector.GetRadialSelectionConsole
struct UTopRHWidget_WheelSelector_GetRadialSelectionConsole_Params
{
public:
	float                                        OUTAngle;                                          // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TopazUI.TopRHWidget_WheelSelector.BindCharacter
struct UTopRHWidget_WheelSelector_BindCharacter_Params
{
public:
	class APawn*                                 Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function TopazUI.TopRHWidget_WheelSelector_Entry.UpdateCounterRotation
struct UTopRHWidget_WheelSelector_Entry_UpdateCounterRotation_Params
{
public:
	float                                        Angle;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function TopazUI.TopRHWidget_WheelSelector_Entry.ToggleHighlighted
struct UTopRHWidget_WheelSelector_Entry_ToggleHighlighted_Params
{
public:
	bool                                         bHighlighted;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


