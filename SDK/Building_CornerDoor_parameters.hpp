#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1C0 (0x1C0 - 0x0)
// Function Building_CornerDoor.Building_CornerDoor_C.ExecuteUbergraph_Building_CornerDoor
struct ABuilding_CornerDoor_C_ExecuteUbergraph_Building_CornerDoor_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_293E[0xC];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 CallFunc_MakeTransform_ReturnValue;                // 0x10(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Vector                    CallFunc_BreakTransform_Location;                  // 0x70(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Rotator                   CallFunc_BreakTransform_Rotation;                  // 0x88(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct CoreUObject_Vector                    CallFunc_BreakTransform_Scale;                     // 0xA0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_294A[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0xC0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Rotator                   CallFunc_TransformRotation_ReturnValue;            // 0x120(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct CoreUObject_Vector                    CallFunc_TransformLocation_ReturnValue;            // 0x138(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Transform                 CallFunc_MakeTransform_ReturnValue_1;              // 0x150(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x1B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_DestructibleDoor_BuildingA1_C*     CallFunc_FinishSpawningActor_ReturnValue;          // 0x1B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


