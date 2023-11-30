#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x2C0 - 0x298)
// BlueprintGeneratedClass Building_CornerDoor.Building_CornerDoor_C
class ABuilding_CornerDoor_C : public AActor
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAkPortalComponent*                    AkPortal;                                          // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Cube;                                              // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_DestructibleDoor_BuildingA1_C*     DestructibleDoor;                                  // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABuilding_CornerDoor_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_Building_CornerDoor(int32 EntryPoint, const struct CoreUObject_Transform& CallFunc_MakeTransform_ReturnValue, const struct CoreUObject_Vector& CallFunc_BreakTransform_Location, const struct CoreUObject_Rotator& CallFunc_BreakTransform_Rotation, const struct CoreUObject_Vector& CallFunc_BreakTransform_Scale, bool CallFunc_IsDedicatedServer_ReturnValue, const struct CoreUObject_Transform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct CoreUObject_Rotator& CallFunc_TransformRotation_ReturnValue, const struct CoreUObject_Vector& CallFunc_TransformLocation_ReturnValue, const struct CoreUObject_Transform& CallFunc_MakeTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_DestructibleDoor_BuildingA1_C* CallFunc_FinishSpawningActor_ReturnValue);
};

}


