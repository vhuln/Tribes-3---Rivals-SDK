#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x338 - 0x308)
// BlueprintGeneratedClass CellFeatures_Parent.CellFeatures_Parent_C
class ACellFeatures_Parent_C : public ABP_NavLinkActor_C
{
public:
	class UNavModifierComponent*                 NavModifier;                                       // 0x308(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         FrameGuide800;                                     // 0x310(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     MaterialWallOverride;                              // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     MaterialFloorOverride;                             // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         HideRoofsForScreenshot;                            // 0x328(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BA6[0x7];                                     // Fixing Size After Last Property  
	class AValUtopiaConstructor*                 OwningConstructor;                                 // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ACellFeatures_Parent_C* GetDefaultObj();

	void GetSwarmBeacon(class ABP_SwarmBeacon_C** SwarmBeaconReference, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetAllChildActors_ChildActors, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ABP_SwarmBeacon_C* K2Node_DynamicCast_AsBP_Swarm_Beacon, bool K2Node_DynamicCast_bSuccess);
	void Set_Material_All(class UMaterialInterface* MaterialToSet, class FName MaterialSlotNameOverride, const TArray<class UStaticMeshComponent*>& NewLocalVar_0, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, TArray<class UStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UStaticMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SetPointLightFunctionMaterial(bool ClearMaterial, class UMaterialInstance* Material, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, TArray<class UPointLightComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class UPointLightComponent* CallFunc_Array_Get_Item, class UPointLightComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1);
	void SetSpotLightBounceAndFog(double IndirectLightMult, double VolScatteringMult, double RectVolScatteringMult, double RectIndirectLightMult, bool UseNewColor, const struct CoreUObject_LinearColor& NewColor, class UMaterialInstance* MaterialOverride, const TArray<class UStaticMeshComponent*>& NewLocalVar_0, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_1, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_2, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_3, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_4, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_5, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class UPointLightComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_Length_ReturnValue, class UPointLightComponent* CallFunc_Array_Get_Item, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_4, int32 Temp_int_Loop_Counter_Variable_4, TArray<class URectLightComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue_1, class URectLightComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class USceneComponent*>& CallFunc_GetParentComponents_Parents, bool CallFunc_Less_IntInt_ReturnValue_1, class USceneComponent* CallFunc_Array_Get_Item_2, class UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_ComponentHasTag_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, TArray<class USpotLightComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, class USpotLightComponent* CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_3, TArray<class USceneComponent*>& CallFunc_GetParentComponents_Parents_1, class USceneComponent* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_4, class UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_ComponentHasTag_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1, float CallFunc_SetIndirectLightingIntensity_NewIntensity_ImplicitCast, float CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetIndirectLightingIntensity_NewIntensity_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, float CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast_2, float CallFunc_SetIndirectLightingIntensity_NewIntensity_ImplicitCast_2, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast_3, float CallFunc_SetVolumetricScatteringIntensity_NewIntensity_ImplicitCast_2);
	void GetOwningConstructor(class AValUtopiaConstructor** OwningConstructor);
	void SetOwningConstructor(class AValUtopiaConstructor* InConstructor);
	void Get_Staticmesh_Location_By_Tag(class FName Tag, TArray<struct CoreUObject_Transform>* TransformArray, const TArray<struct CoreUObject_Transform>& LocalTranformArray, const TArray<class UStaticMeshComponent*>& NewLocalVar_0, TArray<class UStaticMeshComponent*>& CallFunc_GetComponentsByTag_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UStaticMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct CoreUObject_Transform& CallFunc_K2_GetComponentToWorld_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void Set_Roofs_Off_For_Minimap(const TArray<class UStaticMeshComponent*>& NewLocalVar_0, int32 Temp_int_Array_Index_Variable, class UStaticMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<class UStaticMeshComponent*>& CallFunc_GetComponentsByTag_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void Set_Material_By_Tag(class UMaterialInterface* MaterialToSet, int32 ElementToSet, class FName Tag, const struct Utopia_Constructor_MaterialSlotSet_Utopia_Constructor_MaterialSlotSet& MaterialSlotSet, class FName MaterialSlotNameOverride, const TArray<class UStaticMeshComponent*>& NewLocalVar_0, int32 Temp_int_Array_Index_Variable, const struct MaterialSlot_MaterialSlot& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TArray<class UStaticMeshComponent*>& CallFunc_GetComponentsByTag_ReturnValue, TArray<class UStaticMeshComponent*>& CallFunc_GetComponentsByTag_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, class UStaticMeshComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, class UStaticMeshComponent* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2);
	void Set_Mini_Map_Mode(bool EnableMiniMapMode, int32 StencilDepth, const TArray<class UStaticMeshComponent*>& NewLocalVar_0, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UStaticMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TArray<class UStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void UserConstructionScript(const TArray<class UStaticMeshComponent*>& NewLocalVar_0, int32 Temp_int_Array_Index_Variable, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class USceneComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


