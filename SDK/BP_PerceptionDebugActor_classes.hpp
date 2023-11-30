#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2B8 - 0x298)
// BlueprintGeneratedClass BP_PerceptionDebugActor.BP_PerceptionDebugActor_C
class ABP_PerceptionDebugActor_C : public AActor
{
public:
	class UStaticMeshComponent*                  HearingSphere;                                     // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  VisionCone;                                        // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       HeadRoot;                                          // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PerceptionDebugActor_C* GetDefaultObj();

	void InitializePerception(double HearingRange, double VisionRange, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct CoreUObject_Vector& CallFunc_MakeVector_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_2, const struct CoreUObject_Vector& CallFunc_MakeVector_ReturnValue_1, const struct CoreUObject_Vector& CallFunc_MakeVector_ReturnValue_2, const struct Engine_HitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult);
};

}


