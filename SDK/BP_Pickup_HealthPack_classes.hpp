#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x23 (0x42C - 0x409)
// BlueprintGeneratedClass BP_Pickup_HealthPack.BP_Pickup_HealthPack_C
class ABP_Pickup_HealthPack_C : public ABP_Pickup_Master_C
{
public:
	uint8                                        Pad_2C39[0x7];                                     // Fixing Size After Last Property  
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x410(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextRenderComponent*                  CountText;                                         // 0x418(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh_0;                                      // 0x420(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        R_PackCount;                                       // 0x428(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Pickup_HealthPack_C* GetDefaultObj();

	class FText GetContextDescriptionOverride();
	class FText GetContextTitleOverride();
	struct CoreUObject_Vector GetPreviewDetectionOffset();
	enum class ERarity GetContextPingRarity();
	struct CoreUObject_Vector GetPingOffset();
	enum class EValPingType GetContextPingType();
	void OnRep_R_PackCount();
	void UpdateCountLabel(bool CallFunc_EqualEqual_IntInt_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	bool CustomPickupFunc(class AValCharacter* ValCharacter, int32 PacksToAdd, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_AddHealthPickup_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, double CallFunc_FTrunc_A_ImplicitCast);
	bool CharacterPickupCheck(class AValCharacter* ValCharacter, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_FTrunc_A_ImplicitCast);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_Pickup_HealthPack(int32 EntryPoint, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, float K2Node_Event_DeltaSeconds, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct CoreUObject_Rotator& CallFunc_FindLookAtRotation_ReturnValue, const struct CoreUObject_Vector& CallFunc_GetAxes_X, const struct CoreUObject_Vector& CallFunc_GetAxes_Y, const struct CoreUObject_Vector& CallFunc_GetAxes_Z, const struct CoreUObject_Rotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct CoreUObject_Rotator& CallFunc_ComposeRotators_ReturnValue, const struct Engine_HitResult& CallFunc_K2_SetWorldRotation_SweepHitResult);
};

}


