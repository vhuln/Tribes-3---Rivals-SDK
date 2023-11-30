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
// Function BP_DeathCrate_Support_Scanner.BP_DeathCrate_Support_Scanner_C.ReceiveActorBeginOverlap
struct ABP_DeathCrate_Support_Scanner_C_ReceiveActorBeginOverlap_Params
{
public:
	class AActor*                                OtherActor;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_DeathCrate_Support_Scanner.BP_DeathCrate_Support_Scanner_C.ExecuteUbergraph_BP_DeathCrate_Support_Scanner
struct ABP_DeathCrate_Support_Scanner_C_ExecuteUbergraph_BP_DeathCrate_Support_Scanner_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FB4[0x4];                                     // Fixing Size After Last Property  
	class AActor*                                K2Node_Event_OtherActor;                           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


