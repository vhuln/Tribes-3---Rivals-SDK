#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x340 - 0x2F0)
// WidgetBlueprintGeneratedClass UI_Shared_Preview_Rotator.UI_Shared_Preview_Rotator_C
class UUI_Shared_Preview_Rotator_C : public UUIWidget
{
public:
	class UScrollBox*                            Rotation;                                          // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  DefaultPreviewTag;                                 // 0x2F8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DefaultRotation;                                   // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DefaultRotationMultiplier;                         // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DefaultRotationOffsetItem;                         // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DefaultRotationOffsetChar;                         // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_MergedPreviewActor_Loadout_C*> CachedCharPreviews;                                // 0x320(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class ABP_ItemPreviewActor_C*                CachedItemPreview;                                 // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_ItemPreviewActor_C*                CachedItemDetailPreview;                           // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Shared_Preview_Rotator_C* GetDefaultObj();

	void UpdateDefaultRotation(double Rotation, float CallFunc_GetScrollOffset_ReturnValue);
	void GetItemDetailPreview(class ABP_ItemPreviewActor_C** Preview, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class ABP_ItemPreviewActor_C*>& CallFunc_GetAllActorsOfClassWithTag_OutActors, class ABP_ItemPreviewActor_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetItemRotation(double Offset, struct CoreUObject_Rotator* Rotation, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct CoreUObject_Rotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_MakeRotator_Yaw_ImplicitCast);
	void GetCharRotation(double Offset, struct CoreUObject_Rotator* Rotation, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct CoreUObject_Rotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_MakeRotator_Yaw_ImplicitCast);
	void GetCharPreviews(TArray<class ABP_MergedPreviewActor_Loadout_C*>* Previews, TArray<class ABP_MergedPreviewActor_Loadout_C*>& CallFunc_GetAllActorsOfClassWithTag_OutActors, bool CallFunc_Array_IsEmpty_ReturnValue);
	void GetItemPreview(class ABP_ItemPreviewActor_C** Preview, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class ABP_ItemPreviewActor_C*>& CallFunc_GetAllActorsOfClassWithTag_OutActors, class ABP_ItemPreviewActor_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Enable();
	void Reset(const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast);
	void OnInitialized(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void OnRotation(float Offset, int32 Temp_int_Loop_Counter_Variable, class ABP_ItemPreviewActor_C* CallFunc_GetItemDetailPreview_Preview, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct CoreUObject_Rotator& CallFunc_GetItemRotation_Rotation, const struct CoreUObject_Rotator& CallFunc_GetCharRotation_Rotation, const struct CoreUObject_Rotator& CallFunc_GetItemRotation_Rotation_1, class ABP_ItemPreviewActor_C* CallFunc_GetItemPreview_Preview, bool CallFunc_IsValid_ReturnValue_1, TArray<class ABP_MergedPreviewActor_Loadout_C*>& CallFunc_GetCharPreviews_Previews, class ABP_MergedPreviewActor_Loadout_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct Engine_HitResult& CallFunc_K2_SetActorRelativeRotation_SweepHitResult, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_GetItemRotation_Offset_ImplicitCast, double CallFunc_GetCharRotation_Offset_ImplicitCast, double CallFunc_GetItemRotation_Offset_ImplicitCast_1);
};

}


