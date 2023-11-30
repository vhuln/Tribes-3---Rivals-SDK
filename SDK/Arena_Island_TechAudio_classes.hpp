#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2A8 - 0x2A0)
// BlueprintGeneratedClass Arena_Island_TechAudio.Arena_Island_TechAudio_C
class AArena_Island_TechAudio_C : public ALevelScriptActor
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AArena_Island_TechAudio_C* GetDefaultObj();

	void BndEvt__Random0002_Audio_TriggerVolume_0_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor);
	void ExecuteUbergraph_Arena_Island_TechAudio(int32 EntryPoint, class AActor* K2Node_ActorBoundEvent_OverlappedActor, class AActor* K2Node_ActorBoundEvent_OtherActor);
};

}


