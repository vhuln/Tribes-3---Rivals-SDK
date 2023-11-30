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
// Function BP_DeathCrate_BotGoo.BP_DeathCrate_BotGoo_C.ReceiveActorBeginOverlap
struct ABP_DeathCrate_BotGoo_C_ReceiveActorBeginOverlap_Params
{
public:
	class AActor*                                OtherActor;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_DeathCrate_BotGoo.BP_DeathCrate_BotGoo_C.ExecuteUbergraph_BP_DeathCrate_BotGoo
struct ABP_DeathCrate_BotGoo_C_ExecuteUbergraph_BP_DeathCrate_BotGoo_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D33[0x4];                                     // Fixing Size After Last Property  
	class AActor*                                K2Node_Event_OtherActor;                           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


