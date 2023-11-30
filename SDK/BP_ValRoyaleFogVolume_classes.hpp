#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x428 - 0x418)
// BlueprintGeneratedClass BP_ValRoyaleFogVolume.BP_ValRoyaleFogVolume_C
class ABP_ValRoyaleFogVolume_C : public AValRoyaleFogVolume
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x418(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x420(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ValRoyaleFogVolume_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void EnableFog(bool bEnabled);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_ValRoyaleFogVolume(int32 EntryPoint, float K2Node_Event_DeltaSeconds, bool K2Node_Event_bEnabled, const struct Valhalla_CurrentFogCircleData& CallFunc_GetCurrentData_ReturnValue, const struct Engine_HitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
};

}


