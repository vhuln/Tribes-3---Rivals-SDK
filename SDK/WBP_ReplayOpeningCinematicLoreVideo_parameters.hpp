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
// Function WBP_ReplayOpeningCinematicLoreVideo.WBP_ReplayOpeningCinematicLoreVideo_C.HandleOnMediaOpenFailed
struct UWBP_ReplayOpeningCinematicLoreVideo_C_HandleOnMediaOpenFailed_Params
{
public:
	class FString                                FailedUrl;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_ReplayOpeningCinematicLoreVideo.WBP_ReplayOpeningCinematicLoreVideo_C.HandleOnMediaOpened
struct UWBP_ReplayOpeningCinematicLoreVideo_C_HandleOnMediaOpened_Params
{
public:
	class FString                                OpenedUrl;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0xBC (0xBC - 0x0)
// Function WBP_ReplayOpeningCinematicLoreVideo.WBP_ReplayOpeningCinematicLoreVideo_C.ExecuteUbergraph_WBP_ReplayOpeningCinematicLoreVideo
struct UWBP_ReplayOpeningCinematicLoreVideo_C_ExecuteUbergraph_WBP_ReplayOpeningCinematicLoreVideo_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22EE[0x4];                                     // Fixing Size After Last Property  
	class FString                                K2Node_CustomEvent_FailedUrl;                      // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x28(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x38(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x48(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x58(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x68(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_CustomEvent_OpenedUrl;                      // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_SetFocusToThis_ReturnValue;               // 0x88(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Play_ReturnValue;                         // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22F9[0x7];                                     // Fixing Size After Last Property  
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Pause_ReturnValue;                        // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22FB[0x7];                                     // Fixing Size After Last Property  
	class APlayerController*                     CallFunc_GetPlayerControllerOwner_ReturnValue;     // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMediaSoundComponent*                  CallFunc_AddComponentByClass_ReturnValue;          // 0xB0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_OpenSource_ReturnValue;                   // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Pause_ReturnValue_1;                      // 0xBA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveViewRoute_ReturnValue;              // 0xBB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


