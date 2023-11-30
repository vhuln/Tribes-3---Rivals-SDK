#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x378 - 0x350)
// BlueprintGeneratedClass BP_NoClipSpectatorPawn.BP_NoClipSpectatorPawn_C
class ABP_NoClipSpectatorPawn_C : public AValSpectatorPawn
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       DefaultMovementSpeed;                              // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FastMovementSpeedMult;                             // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFloatingPawnMovement*                 As_Floating_Pawn_Movement;                         // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       DefaultAccel;                                      // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_NoClipSpectatorPawn_C* GetDefaultObj();

	void InpActEvt_FastFly_K2Node_InputActionEvent_1(const struct InputCore_Key& Key);
	void InpActEvt_FastFly_K2Node_InputActionEvent_0(const struct InputCore_Key& Key);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_NoClipSpectatorPawn(int32 EntryPoint, const struct InputCore_Key& K2Node_InputActionEvent_Key_1, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, class USpectatorPawnMovement* K2Node_DynamicCast_AsSpectator_Pawn_Movement, bool K2Node_DynamicCast_bSuccess, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue_1, class USpectatorPawnMovement* K2Node_DynamicCast_AsSpectator_Pawn_Movement_1, bool K2Node_DynamicCast_bSuccess_1, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue_2, class USpectatorPawnMovement* K2Node_DynamicCast_AsSpectator_Pawn_Movement_2, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_GetMaxSpeed_ReturnValue, const struct InputCore_Key& Temp_struct_Variable, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct InputCore_Key& K2Node_InputActionEvent_Key, float K2Node_VariableSet_MaxSpeed_ImplicitCast, float K2Node_VariableSet_MaxSpeed_ImplicitCast_1, double K2Node_VariableSet_DefaultAccel_ImplicitCast, double K2Node_VariableSet_DefaultMovementSpeed_ImplicitCast, float K2Node_VariableSet_Acceleration_ImplicitCast, float K2Node_VariableSet_Acceleration_ImplicitCast_1);
};

}


