#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// Function GameplayBehaviorSmartObjectsModule.AITask_UseGameplayBehaviorSmartObject.UseSmartObjectWithGameplayBehavior
struct UAITask_UseGameplayBehaviorSmartObject_UseSmartObjectWithGameplayBehavior_Params
{
public:
	class AAIController*                         Controller;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SmartObjectsModule_SmartObjectClaimHandle ClaimHandle;                                       // 0x8(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bLockAILogic;                                      // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BDA[0x7];                                      // Fixing Size After Last Property  
	class UAITask_UseGameplayBehaviorSmartObject* ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GameplayBehaviorSmartObjectsModule.AITask_UseGameplayBehaviorSmartObject.UseGameplayBehaviorSmartObject
struct UAITask_UseGameplayBehaviorSmartObject_UseGameplayBehaviorSmartObject_Params
{
public:
	class AAIController*                         Controller;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                SmartObjectActor;                                  // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USmartObjectComponent*                 SmartObjectComponent;                              // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockAILogic;                                      // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C08[0x7];                                      // Fixing Size After Last Property  
	class UAITask_UseGameplayBehaviorSmartObject* ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GameplayBehaviorSmartObjectsModule.AITask_UseGameplayBehaviorSmartObject.MoveToAndUseSmartObjectWithGameplayBehavior
struct UAITask_UseGameplayBehaviorSmartObject_MoveToAndUseSmartObjectWithGameplayBehavior_Params
{
public:
	class AAIController*                         Controller;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SmartObjectsModule_SmartObjectClaimHandle ClaimHandle;                                       // 0x8(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bLockAILogic;                                      // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C3F[0x7];                                      // Fixing Size After Last Property  
	class UAITask_UseGameplayBehaviorSmartObject* ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameplayBehaviorSmartObjectsModule.GameplayBehaviorSmartObjectsBlueprintFunctionLibrary.UseGameplayBehaviorSmartObject
struct UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary_UseGameplayBehaviorSmartObject_Params
{
public:
	class AActor*                                Avatar;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                SmartObject;                                       // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C9D[0x7];                                      // Fixing Size Of Struct 
};

}
}


