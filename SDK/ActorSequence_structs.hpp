#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EActorSequenceObjectReferenceType : uint8
{
	ContextActor                   = 0,
	ExternalActor                  = 1,
	Component                      = 2,
	EActorSequenceObjectReferenceType_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// ScriptStruct ActorSequence.ActorSequenceObjectReference
struct ActorSequence_ActorSequenceObjectReference
{
public:
	enum class EActorSequenceObjectReferenceType Type;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1941[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Guid                      ActorId;                                           // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1947[0x4];                                     // Fixing Size After Last Property  
	class FString                                PathToComponent;                                   // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ActorSequence.ActorSequenceObjectReferences
struct ActorSequence_ActorSequenceObjectReferences
{
public:
	TArray<struct ActorSequence_ActorSequenceObjectReference> Array;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ActorSequence.ActorSequenceObjectReferenceMap
struct ActorSequence_ActorSequenceObjectReferenceMap
{
public:
	TArray<struct CoreUObject_Guid>              BindingIds;                                        // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct ActorSequence_ActorSequenceObjectReferences> References;                                        // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

}


