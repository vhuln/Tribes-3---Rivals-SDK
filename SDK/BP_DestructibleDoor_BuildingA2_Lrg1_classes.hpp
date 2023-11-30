#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6B (0x5B8 - 0x54D)
// BlueprintGeneratedClass BP_DestructibleDoor_BuildingA2_Lrg1.BP_DestructibleDoor_BuildingA2_Lrg1_C
class ABP_DestructibleDoor_BuildingA2_Lrg1_C : public ABP_DestructibleDoor_C
{
public:
	uint8                                        Pad_2CE0[0x3];                                     // Fixing Size After Last Property  
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct CoreUObject_Vector                    CollisionBoxLocation;                              // 0x558(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Vector                    CollisionRightVector;                              // 0x570(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Vector                    HitActorLocation;                                  // 0x588(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Vector                    ActorToCollisionDirection;                         // 0x5A0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_DestructibleDoor_BuildingA2_Lrg1_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_DestructibleDoor_BuildingA2_Lrg1(int32 EntryPoint);
};

}


