#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// Function BP_LocalAudioEvent.BP_LocalAudioEvent_C.HandleAudio
struct ABP_LocalAudioEvent_C_HandleAudio_Params
{
public:
	bool                                         bFriendly;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_176C[0x3];                                     // Fixing Size After Last Property  
	struct GameplayTags_GameplayTag              ReferrenceTag;                                     // 0x4(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_LocalAudioEvent.BP_LocalAudioEvent_C.ExecuteUbergraph_BP_LocalAudioEvent
struct ABP_LocalAudioEvent_C_ExecuteUbergraph_BP_LocalAudioEvent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bFriendly;                            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17BD[0x3];                                     // Fixing Size After Last Property  
	struct GameplayTags_GameplayTag              K2Node_Event_ReferrenceTag;                        // 0x8(0x8)(ConstParm, NoDestructor, HasGetValueTypeHash)
	bool                                         GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


