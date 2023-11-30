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
// Function BI_AI.BI_AI_C.GetFacingDirection
struct IBI_AI_C_GetFacingDirection_Params
{
public:
	struct CoreUObject_Vector                    Direction;                                         // 0x0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BI_AI.BI_AI_C.GetMuzzleLocation
struct IBI_AI_C_GetMuzzleLocation_Params
{
public:
	struct CoreUObject_Vector                    MuzzleLocation;                                    // 0x0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BI_AI.BI_AI_C.GetThreatSystem
struct IBI_AI_C_GetThreatSystem_Params
{
public:
	class UValThreatComponent*                   ThreatSystem;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BI_AI.BI_AI_C.GetAbilitySystem
struct IBI_AI_C_GetAbilitySystem_Params
{
public:
	class UAbilitySystemComponent*               AbilitySystem;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BI_AI.BI_AI_C.GetAIMuzzle
struct IBI_AI_C_GetAIMuzzle_Params
{
public:
	class USceneComponent*                       Muzzle;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}


