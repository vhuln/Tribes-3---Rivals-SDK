#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2A8 - 0x298)
// BlueprintGeneratedClass BP_LocalAudioEvent.BP_LocalAudioEvent_C
class ABP_LocalAudioEvent_C : public AValLocalWorldAudioEvent
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_LocalAudioEvent_C* GetDefaultObj();

	void HandleAudio(bool bFriendly, struct GameplayTags_GameplayTag& ReferrenceTag);
	void ExecuteUbergraph_BP_LocalAudioEvent(int32 EntryPoint, bool K2Node_Event_bFriendly, const struct GameplayTags_GameplayTag& K2Node_Event_ReferrenceTag, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess);
};

}


