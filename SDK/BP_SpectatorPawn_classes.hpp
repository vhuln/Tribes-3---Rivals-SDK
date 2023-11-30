#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x388 - 0x350)
// BlueprintGeneratedClass BP_SpectatorPawn.BP_SpectatorPawn_C
class ABP_SpectatorPawn_C : public AValSpectatorPawn
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                      Camera;                                            // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                   SpringArm;                                         // 0x360(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       DefaultMovementSpeed;                              // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FastMovementSpeedMult;                             // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFloatingPawnMovement*                 As_Floating_Pawn_Movement;                         // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       DefaultAccel;                                      // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SpectatorPawn_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void K2_OnBecomeViewTarget(class APlayerController* PC);
	void ExecuteUbergraph_BP_SpectatorPawn(int32 EntryPoint, class APlayerController* K2Node_Event_PC);
};

}


