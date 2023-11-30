#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2C0 - 0x2A8)
// BlueprintGeneratedClass BP_ClosestFogPointActor.BP_ClosestFogPointActor_C
class ABP_ClosestFogPointActor_C : public AValClosestFogPointActor
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAkComponent*                          AkCircleSFXComp;                                   // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ClosestFogPointActor_C* GetDefaultObj();

	void OnFogUpdated(float Distance, float Radius);
	void OnFogStarted();
	void OnCellDestroyed(class UAkAudioEvent* SoundToPlay, struct CoreUObject_Vector& Location);
	void ExecuteUbergraph_BP_ClosestFogPointActor(int32 EntryPoint, class UAkAudioEvent* K2Node_Event_SoundToPlay, const struct CoreUObject_Vector& K2Node_Event_Location, float K2Node_Event_Distance, float K2Node_Event_Radius);
};

}


