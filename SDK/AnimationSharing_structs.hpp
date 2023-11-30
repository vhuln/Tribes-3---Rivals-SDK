#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct AnimationSharing.AnimationSetup
struct AnimationSharing_AnimationSetup
{
public:
	class UAnimSequence*                         AnimSequence;                                      // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UAnimSharingStateInstance> AnimBlueprint;                                     // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_PerPlatformInt                 NumRandomizedInstances;                            // 0x10(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_PerPlatformBool                Enabled;                                           // 0x14(0x1)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_12DF[0x3];                                     // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AnimationSharing.AnimationStateEntry
struct AnimationSharing_AnimationStateEntry
{
public:
	uint8                                        State;                                             // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12FB[0x7];                                     // Fixing Size After Last Property  
	TArray<struct AnimationSharing_AnimationSetup> AnimationSetups;                                   // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bOnDemand;                                         // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAdditive;                                         // 0x19(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_130A[0x2];                                     // Fixing Size After Last Property  
	float                                        BlendTime;                                         // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReturnToPreviousState;                            // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetNextState;                                     // 0x21(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NextState;                                         // 0x22(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1321[0x1];                                     // Fixing Size After Last Property  
	struct Engine_PerPlatformInt                 MaximumNumberOfConcurrentInstances;                // 0x24(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        WiggleTimePercentage;                              // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequiresCurves;                                   // 0x2C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_132F[0x3];                                     // Fixing Size Of Struct 
};

// 0x38 (0x38 - 0x0)
// ScriptStruct AnimationSharing.PerSkeletonAnimationSharingSetup
struct AnimationSharing_PerSkeletonAnimationSharingSetup
{
public:
	class USkeleton*                             Skeleton;                                          // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         SkeletalMesh;                                      // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UAnimSharingTransitionInstance> BlendAnimBlueprint;                                // 0x10(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UAnimSharingAdditiveInstance> AdditiveAnimBlueprint;                             // 0x18(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UAnimationSharingStateProcessor> StateProcessorClass;                               // 0x20(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct AnimationSharing_AnimationStateEntry> AnimationStates;                                   // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AnimationSharing.AnimationSharingScalability
struct AnimationSharing_AnimationSharingScalability
{
public:
	struct Engine_PerPlatformBool                UseBlendTransitions;                               // 0x0(0x1)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1339[0x3];                                     // Fixing Size After Last Property  
	struct Engine_PerPlatformFloat               BlendSignificanceValue;                            // 0x4(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_PerPlatformInt                 MaximumNumberConcurrentBlends;                     // 0x8(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_PerPlatformFloat               TickSignificanceValue;                             // 0xC(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct AnimationSharing.TickAnimationSharingFunction
struct AnimationSharing_TickAnimationSharingFunction : public Engine_TickFunction
{
public:
	uint8                                        Pad_1358[0x8];                                     // Fixing Size Of Struct 
};

}


