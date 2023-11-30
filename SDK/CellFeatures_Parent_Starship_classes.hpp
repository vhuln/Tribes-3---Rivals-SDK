#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x451 - 0x430)
// BlueprintGeneratedClass CellFeatures_Parent_Starship.CellFeatures_Parent_Starship_C
class ACellFeatures_Parent_Starship_C : public ABP_DestructibleAsset_C
{
public:
	class UNavModifierComponent*                 NavModifier;                                       // 0x430(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         FrameGuide800;                                     // 0x438(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         FrameGuide1100;                                    // 0x440(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     MaterialOverride;                                  // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         HideRoofsForScreenshot;                            // 0x450(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ACellFeatures_Parent_Starship_C* GetDefaultObj();

	void Set_Material_By_Tag(class UMaterialInstance* MaterialToSet, int32 ElementToSet, class FName Tag, const TArray<class UStaticMeshComponent*>& NewLocalVar_0, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UStaticMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class UStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue);
	void Set_Mini_Map_Mode(bool EnableMiniMapMode, int32 StencilDepth, const TArray<class UStaticMeshComponent*>& NewLocalVar_0, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UStaticMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TArray<class UStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void UserConstructionScript(const TArray<class UStaticMeshComponent*>& NewLocalVar_0, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UStaticMeshComponent*>& CallFunc_GetComponentsByTag_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


