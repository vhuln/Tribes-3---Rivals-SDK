#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2F (0x2C38 - 0x2C09)
// BlueprintGeneratedClass BP_CharPlayer_Dungeon.BP_CharPlayer_Dungeon_C
class ABP_CharPlayer_Dungeon_C : public ABP_CharPlayer_C
{
public:
	uint8                                        Pad_31CE[0x7];                                     // Fixing Size After Last Property  
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x2C10(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                  Onep_GunLight;                                     // 0x2C18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UValCharacterFootprintComponent*       ValCharacterFootprint;                             // 0x2C20(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       PickupLocation;                                    // 0x2C28(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPhysicsHandleComponent*               GrabHandleComponent;                               // 0x2C30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CharPlayer_Dungeon_C* GetDefaultObj();

	void BP_ReleaseHeldItem();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_CharPlayer_Dungeon(int32 EntryPoint, float K2Node_Event_DeltaSeconds, const struct CoreUObject_Vector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsHoldingObject_ReturnValue, class AValPlayerController* CallFunc_GetValPlayerController_ReturnValue, const struct CoreUObject_Rotator& CallFunc_GetViewRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct CoreUObject_Vector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct CoreUObject_Vector& CallFunc_Subtract_VectorVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetComponentLocation_ReturnValue_2, double CallFunc_VSize_ReturnValue, const struct CoreUObject_Vector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_Multiply_VectorVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_Add_VectorVector_ReturnValue);
};

}


