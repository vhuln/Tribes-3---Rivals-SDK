#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.ShowAimAssistDebug
struct UUASAimAssistComponent_ShowAimAssistDebug_Params
{
public:
	bool                                         bShow;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.SetAimAssistEnabled
struct UUASAimAssistComponent_SetAimAssistEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.SetAimAssistDataAsset
struct UUASAimAssistComponent_SetAimAssistDataAsset_Params
{
public:
	class UUASAimAssistConfigDataAsset*          DataAsset;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.OnTargetDestroyed
struct UUASAimAssistComponent_OnTargetDestroyed_Params
{
public:
	class AActor*                                DestroyedActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.GetRotationToCrosshairDirection
struct UUASAimAssistComponent_GetRotationToCrosshairDirection_Params
{
public:
	struct CoreUObject_Vector                    From;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TraceProfileName;                                  // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinDistanceToRotateToTarget;                       // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Distance;                                          // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   ReturnValue;                                       // 0x28(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.GetCurrentTargetSocketLocation
struct UUASAimAssistComponent_GetCurrentTargetSocketLocation_Params
{
public:
	struct CoreUObject_Vector                    OutLocation;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E83[0x7];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.GetCrosshairPosition
struct UUASAimAssistComponent_GetCrosshairPosition_Params
{
public:
	struct CoreUObject_Vector2D                  ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.GetControlMultipliers
struct UUASAimAssistComponent_GetControlMultipliers_Params
{
public:
	float                                        Pitch;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Yaw;                                               // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.CustomGetCurrentTargetLocation
struct UUASAimAssistComponent_CustomGetCurrentTargetLocation_Params
{
public:
	struct CoreUObject_Vector                    OutLocation;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EAB[0x7];                                      // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// Function AimAssistSystem.UASAimAssistComponent.bIsAimAssistEnabled
struct UUASAimAssistComponent_bIsAimAssistEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AimAssistSystem.UASAimAssistTargetComponent.Init
struct UUASAimAssistTargetComponent_Init_Params
{
public:
	class UMeshComponent*                        Mesh;                                              // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


