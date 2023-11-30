#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2D8 - 0x2B8)
// BlueprintGeneratedClass BP_CharacterFootprint.BP_CharacterFootprint_C
class ABP_CharacterFootprint_C : public AValFootprint
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UDecalComponent*                       Decal;                                             // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Bob;                                               // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CharacterFootprint_C* GetDefaultObj();

	void UserConstructionScript();
	void BPUpdateFootprint();
	void ExecuteUbergraph_BP_CharacterFootprint(int32 EntryPoint, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, const struct CoreUObject_Transform& CallFunc_GetTransform_ReturnValue, const struct CoreUObject_Vector& CallFunc_Add_VectorVector_ReturnValue, const struct CoreUObject_Rotator& CallFunc_FindRelativeLookAtRotation_ReturnValue, const struct Engine_HitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult);
};

}


