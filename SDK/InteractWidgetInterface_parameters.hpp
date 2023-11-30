#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x9 - 0x0)
// Function InteractWidgetInterface.InteractWidgetInterface_C.GetWidgetBlockInteractReason
struct IInteractWidgetInterface_C_GetWidgetBlockInteractReason_Params
{
public:
	class AValCharacter*                         Initiator;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EInteractionFailureType           Reason;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function InteractWidgetInterface.InteractWidgetInterface_C.OnInstantActivation
struct IInteractWidgetInterface_C_OnInstantActivation_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function InteractWidgetInterface.InteractWidgetInterface_C.OnLiftSummoned
struct IInteractWidgetInterface_C_OnLiftSummoned_Params
{
public:
	int32                                        LiftLevel;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function InteractWidgetInterface.InteractWidgetInterface_C.GetTotalChannelTime
struct IInteractWidgetInterface_C_GetTotalChannelTime_Params
{
public:
	double                                       ChannelTime;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function InteractWidgetInterface.InteractWidgetInterface_C.OnChannellingToggled
struct IInteractWidgetInterface_C_OnChannellingToggled_Params
{
public:
	bool                                         IsChanneling;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C8B[0x7];                                     // Fixing Size After Last Property  
	class AController*                           Controller;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_WidgetInteraction_C*               WidgetInteractionActor;                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function InteractWidgetInterface.InteractWidgetInterface_C.AddChildInteractionActor
struct IInteractWidgetInterface_C_AddChildInteractionActor_Params
{
public:
	class ABP_WidgetInteraction_C*               ChildToAdd;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function InteractWidgetInterface.InteractWidgetInterface_C.OnKeycodeEntered
struct IInteractWidgetInterface_C_OnKeycodeEntered_Params
{
public:
	TArray<int32>                                EnteredKeycode;                                    // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class AActor*                                InteractingActor;                                  // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function InteractWidgetInterface.InteractWidgetInterface_C.GetKeycode
struct IInteractWidgetInterface_C_GetKeycode_Params
{
public:
	TArray<int32>                                Keycode;                                           // 0x0(0x10)(Parm, OutParm)
};

// 0x1 (0x1 - 0x0)
// Function InteractWidgetInterface.InteractWidgetInterface_C.GetInteractWidgetType
struct IInteractWidgetInterface_C_GetInteractWidgetType_Params
{
public:
	enum class EInteractWidgetType               Type;                                              // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


