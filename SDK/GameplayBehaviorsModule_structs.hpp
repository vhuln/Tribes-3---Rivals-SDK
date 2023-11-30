#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EGameplayBehaviorInstantiationPolicy : uint8
{
	Instantiate                    = 0,
	ConditionallyInstantiate       = 1,
	DontInstantiate                = 2,
	EGameplayBehaviorInstantiationPolicy_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayBehaviorsModule.AgentGameplayBehaviors
struct GameplayBehaviorsModule_AgentGameplayBehaviors
{
public:
	TArray<class UGameplayBehavior*>             Behaviors;                                         // 0x0(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GameplayBehaviorsModule.MontagePlaybackData
struct GameplayBehaviorsModule_MontagePlaybackData
{
public:
	class AActor*                                Avatar;                                            // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          AnimMontage;                                       // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilitySystemComponent*               AbilityComponent;                                  // 0x10(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A8[0x30];                                     // Fixing Size Of Struct 
};

}


