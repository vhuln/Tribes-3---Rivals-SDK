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
// Function BP_SpectatorPawn.BP_SpectatorPawn_C.K2_OnBecomeViewTarget
struct ABP_SpectatorPawn_C_K2_OnBecomeViewTarget_Params
{
public:
	class APlayerController*                     PC;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_SpectatorPawn.BP_SpectatorPawn_C.ExecuteUbergraph_BP_SpectatorPawn
struct ABP_SpectatorPawn_C_ExecuteUbergraph_BP_SpectatorPawn_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E96[0x4];                                      // Fixing Size After Last Property  
	class APlayerController*                     K2Node_Event_PC;                                   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


