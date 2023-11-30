#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function Arena_Island_TechAudio.Arena_Island_TechAudio_C.BndEvt__Random0002_Audio_TriggerVolume_0_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature
struct AArena_Island_TechAudio_C_BndEvt__Random0002_Audio_TriggerVolume_0_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature_Params
{
public:
	class AActor*                                OverlappedActor;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function Arena_Island_TechAudio.Arena_Island_TechAudio_C.ExecuteUbergraph_Arena_Island_TechAudio
struct AArena_Island_TechAudio_C_ExecuteUbergraph_Arena_Island_TechAudio_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FA2[0x4];                                      // Fixing Size After Last Property  
	class AActor*                                K2Node_ActorBoundEvent_OverlappedActor;            // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_ActorBoundEvent_OtherActor;                 // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


