#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x8E8 - 0x8C4)
// BlueprintGeneratedClass BP_Projectile_StickyGrenade.BP_Projectile_StickyGrenade_C
class ABP_Projectile_StickyGrenade_C : public ABP_Projectile_Grenade_Master_C
{
public:
	uint8                                        Pad_3C8F[0x4];                                     // Fixing Size After Last Property  
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x8C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         FireFieldUpgrade;                                  // 0x8D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3C97[0x7];                                     // Fixing Size After Last Property  
	struct GameplayAbilities_GameplayEffectSpecHandle FirePoolEffect;                                    // 0x8D8(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class ABP_Projectile_StickyGrenade_C* GetDefaultObj();

	void OnTravelStopped();
	void Attach_to_Object(class AValCharacter* ActorAttachTo, const struct CoreUObject_Vector& ImpactLocation, const struct CoreUObject_Vector& ImpactNormal, double LocalGrenadeSize, const struct CoreUObject_Vector& LocalTargetLoc, const struct Engine_HitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct Engine_HitResult& CallFunc_MakeHitResult_ReturnValue, const struct CoreUObject_Vector& CallFunc_Conv_DoubleToVector_ReturnValue, class FName CallFunc_Get_Closest_Socket_Socket, const struct CoreUObject_Vector& CallFunc_GetSocketLocation_ReturnValue, TArray<class AActor*>& Temp_object_Variable, const struct CoreUObject_Vector& CallFunc_Multiply_VectorVector_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct CoreUObject_Vector& CallFunc_Conv_DoubleToVector_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct CoreUObject_Vector& CallFunc_Multiply_VectorVector_ReturnValue_1, const struct CoreUObject_Vector& CallFunc_Add_VectorVector_ReturnValue, const struct Engine_HitResult& CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct CoreUObject_Vector& CallFunc_BreakHitResult_Location, const struct CoreUObject_Vector& CallFunc_BreakHitResult_ImpactPoint, const struct CoreUObject_Vector& CallFunc_BreakHitResult_Normal, const struct CoreUObject_Vector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct CoreUObject_Vector& CallFunc_BreakHitResult_TraceStart, const struct CoreUObject_Vector& CallFunc_BreakHitResult_TraceEnd, const struct CoreUObject_Vector& CallFunc_Add_VectorVector_ReturnValue_1);
	void Get_Closest_Socket(class AValCharacter* TargetChar, const struct CoreUObject_Vector& Location, class FName* Socket, class FName CallFunc_GetCharacterClosest3PSocketName_ReturnValue);
	void ReceiveBeginPlay();
	void OnProjectileBounce(struct Engine_HitResult& ImpactResult, struct CoreUObject_Vector& ImpactVelocity);
	void NetMulticastAttachToObject(class AValCharacter* TargetActor, const struct CoreUObject_Vector& Pos, const struct CoreUObject_Vector& Normal);
	void HandlePredictedStop(struct Engine_HitResult& HitResult);
	void ExecuteUbergraph_BP_Projectile_StickyGrenade(int32 EntryPoint, class APawn* CallFunc_GetInstigator_ReturnValue, class ABP_CharPlayer_Test_C* K2Node_DynamicCast_AsBP_Char_Player_Test, bool K2Node_DynamicCast_bSuccess, const struct Engine_HitResult& K2Node_Event_ImpactResult, const struct CoreUObject_Vector& K2Node_Event_ImpactVelocity, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct CoreUObject_Vector& CallFunc_BreakHitResult_Location, const struct CoreUObject_Vector& CallFunc_BreakHitResult_ImpactPoint, const struct CoreUObject_Vector& CallFunc_BreakHitResult_Normal, const struct CoreUObject_Vector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct CoreUObject_Vector& CallFunc_BreakHitResult_TraceStart, const struct CoreUObject_Vector& CallFunc_BreakHitResult_TraceEnd, class APawn* CallFunc_GetInstigator_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class AValCharacter* K2Node_CustomEvent_TargetActor, const struct CoreUObject_Vector& K2Node_CustomEvent_Pos, const struct CoreUObject_Vector& K2Node_CustomEvent_Normal, const struct Engine_HitResult& K2Node_Event_HitResult, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct CoreUObject_Vector& CallFunc_BreakHitResult_Location_1, const struct CoreUObject_Vector& CallFunc_BreakHitResult_ImpactPoint_1, const struct CoreUObject_Vector& CallFunc_BreakHitResult_Normal_1, const struct CoreUObject_Vector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, class FName CallFunc_BreakHitResult_BoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct CoreUObject_Vector& CallFunc_BreakHitResult_TraceStart_1, const struct CoreUObject_Vector& CallFunc_BreakHitResult_TraceEnd_1, class APawn* CallFunc_GetInstigator_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, class AValCharacter* K2Node_DynamicCast_AsVal_Character_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1);
};

}


