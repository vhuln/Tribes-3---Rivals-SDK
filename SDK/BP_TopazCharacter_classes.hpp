#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F (0x2C28 - 0x2C09)
// BlueprintGeneratedClass BP_TopazCharacter.BP_TopazCharacter_C
class ABP_TopazCharacter_C : public ABP_CharPlayer_C
{
public:
	uint8                                        Pad_3E4[0x7];                                      // Fixing Size After Last Property  
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x2C10(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Char_Audio_Ski;                                    // 0x2C18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URouteHistoryComponent_C*              RouteHistoryComponent;                             // 0x2C20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_TopazCharacter_C* GetDefaultObj();

	void OnSkiStartedEvent();
	void OnSkiStoppedEvent();
	void RouteHistoryCheat(const class FString& Command);
	void Launch();
	void OnPickup(class AValPickup* Pickup);
	void ExecuteUbergraph_BP_TopazCharacter(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, float CallFunc_GetThirdPersonCameraAlpha_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_IsLocallyViewed_ReturnValue, const class FString& K2Node_Event_Command, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsEnemyWith_ReturnValue, const struct CoreUObject_Transform& Temp_struct_Variable, const struct CoreUObject_Rotator& CallFunc_K2_GetActorRotation_ReturnValue, class URouteHistoryComponent_C* CallFunc_AddComponent_ReturnValue, const struct CoreUObject_Vector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_Multiply_VectorVector_ReturnValue, class AValPickup* K2Node_Event_Pickup, bool CallFunc_IsLocallyViewed_ReturnValue_1, class APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue, class ABP_ValPlayerController_Topaz_C* K2Node_DynamicCast_AsBP_Val_Player_Controller_Topaz, bool K2Node_DynamicCast_bSuccess, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast);
};

}


