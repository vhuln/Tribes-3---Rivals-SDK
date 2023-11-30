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
// Function BP_ValRoyaleFogVolume.BP_ValRoyaleFogVolume_C.EnableFog
struct ABP_ValRoyaleFogVolume_C_EnableFog_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_ValRoyaleFogVolume.BP_ValRoyaleFogVolume_C.ReceiveTick
struct ABP_ValRoyaleFogVolume_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x119 (0x119 - 0x0)
// Function BP_ValRoyaleFogVolume.BP_ValRoyaleFogVolume_C.ExecuteUbergraph_BP_ValRoyaleFogVolume
struct ABP_ValRoyaleFogVolume_C_ExecuteUbergraph_BP_ValRoyaleFogVolume_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bEnabled;                             // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_276B[0x7];                                     // Fixing Size After Last Property  
	struct Valhalla_CurrentFogCircleData         CallFunc_GetCurrentData_ReturnValue;               // 0x10(0x20)(NoDestructor)
	struct Engine_HitResult                      CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x30(0xE8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorLocation_ReturnValue;          // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


