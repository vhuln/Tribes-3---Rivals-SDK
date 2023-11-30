#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x51 (0x51 - 0x0)
// Function GA_Turret_AntiAir_Instant.GA_Turret_AntiAir_Instant_C.ValCheckCost
struct UGA_Turret_AntiAir_Instant_C_ValCheckCost_Params
{
public:
	struct GameplayAbilities_GameplayAbilitySpecHandle Handle;                                            // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3926[0x4];                                     // Fixing Size After Last Property  
	struct GameplayAbilities_GameplayAbilityActorInfo ActorInfo;                                         // 0x8(0x48)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GA_Turret_AntiAir_Instant.GA_Turret_AntiAir_Instant_C.ExecuteUbergraph_GA_Turret_AntiAir_Instant
struct UGA_Turret_AntiAir_Instant_C_ExecuteUbergraph_GA_Turret_AntiAir_Instant_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


