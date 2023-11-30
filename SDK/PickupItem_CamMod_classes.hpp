#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6F8 (0x760 - 0x68)
// BlueprintGeneratedClass PickupItem_CamMod.PickupItem_CamMod_C
class UPickupItem_CamMod_C : public UValCameraModifier
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct Engine_PostProcessSettings            PPSettings;                                        // 0x70(0x6E0)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*              PickupFXMID;                                       // 0x750(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                             PickupFXMat;                                       // 0x758(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPickupItem_CamMod_C* GetDefaultObj();

	void BlueprintModifyPostProcess(float DeltaTime, float* PostProcessBlendWeight, struct Engine_PostProcessSettings* PostProcessSettings, bool CallFunc_IsValid_ReturnValue);
	void OnAddedToCamera(class APlayerCameraManager* Camera);
	void ExecuteUbergraph_PickupItem_CamMod(int32 EntryPoint, const struct Engine_WeightedBlendable& K2Node_MakeStruct_WeightedBlendable, int32 Temp_int_Array_Index_Variable, TArray<struct Engine_WeightedBlendable>& K2Node_MakeArray_Array, const struct Engine_WeightedBlendables& K2Node_MakeStruct_WeightedBlendables, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerCameraManager* K2Node_Event_Camera, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


