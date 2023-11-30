#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB1 (0x151 - 0xA0)
// BlueprintGeneratedClass BP_PhysicalHitReact.BP_PhysicalHitReact_C
class UBP_PhysicalHitReact_C : public UActorComponent
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPhysicalAnimationComponent*           PhysicalAnimationComponent;                        // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Mesh;                                              // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	double                                       Hit_Reaction_Time_Remaining;                       // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct CoreUObject_Vector                    ImpluseDirection;                                  // 0xC0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnablePhysicsHitReact;                             // 0xD8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_404[0x3];                                      // Fixing Size After Last Property  
	class FName                                  PelvisSubstitute;                                  // 0xDC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Bone_to_Simulate;                                  // 0xE4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Pelvis_Bone_Name;                                  // 0xEC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_409[0x4];                                      // Fixing Size After Last Property  
	TArray<class FName>                          BonesToIgnore;                                     // 0xF8(0x10)(Edit, BlueprintVisible)
	float                                        ImpulseScale;                                      // 0x108(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40B[0x4];                                      // Fixing Size After Last Property  
	double                                       Physics_Weight_Time_Fast;                          // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Physics_Playback_Speed_Fast;                       // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Physics_Weight_Time_Slow;                          // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Physics_Playback_Speed_Slow;                       // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MeshMass;                                          // 0x130(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_411[0x4];                                      // Fixing Size After Last Property  
	double                                       BoneMass;                                          // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          BonesToWeightZero;                                 // 0x140(0x10)(Edit, BlueprintVisible)
	bool                                         bIsReacting;                                       // 0x150(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_PhysicalHitReact_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Hit_React(const struct Valhalla_DamageData& Damage_Data);
	void ExecuteUbergraph_BP_PhysicalHitReact(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, float K2Node_Event_DeltaSeconds, class AActor* CallFunc_GetOwner_ReturnValue, const struct Valhalla_DamageData& K2Node_CustomEvent_Damage_Data, class UPhysicalAnimationComponent* CallFunc_AddComponentByClass_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, const struct CoreUObject_Vector& CallFunc_Subtract_VectorVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_Add_VectorVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_Multiply_VectorVector_ReturnValue, double CallFunc_FInterpTo_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool Temp_bool_Variable, double CallFunc_FMin_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, const struct Engine_HitResult& CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct CoreUObject_Vector& CallFunc_BreakHitResult_Location, const struct CoreUObject_Vector& CallFunc_BreakHitResult_ImpactPoint, const struct CoreUObject_Vector& CallFunc_BreakHitResult_Normal, const struct CoreUObject_Vector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct CoreUObject_Vector& CallFunc_BreakHitResult_TraceStart, const struct CoreUObject_Vector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_EqualEqual_NameName_ReturnValue, class FName K2Node_Select_Default, bool CallFunc_Array_Contains_ReturnValue, const struct Engine_PhysicalAnimationData& K2Node_MakeStruct_PhysicalAnimationData, const struct CoreUObject_Vector& CallFunc_Conv_DoubleToVector_ReturnValue_1, const struct CoreUObject_Vector& CallFunc_Multiply_VectorVector_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, float CallFunc_GetBoneMass_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, float CallFunc_GetMass_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, class FName CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetAllBodiesBelowPhysicsBlendWeight_PhysicsBlendWeight_ImplicitCast, double CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast);
};

}


