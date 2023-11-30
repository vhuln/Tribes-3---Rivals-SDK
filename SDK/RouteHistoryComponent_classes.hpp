#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3D (0x2DD - 0x2A0)
// BlueprintGeneratedClass RouteHistoryComponent.RouteHistoryComponent_C
class URouteHistoryComponent_C : public USceneComponent
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bIsRecording;                                      // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18CF[0x7];                                     // Fixing Size After Last Property  
	TArray<struct RouteHistoryComponentPoint_RouteHistoryComponentPoint> Points;                                            // 0x2B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_TopazCharacter_C*                  ValCharacter;                                      // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UValCharacterMovementComponent*        ValCharacterMovementComponent;                     // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       UpdateFrequency;                                   // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LatestRecordIndex;                                 // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERouteHistoryComponent_VisualizationTypes VisualizationType;                                 // 0x2DC(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URouteHistoryComponent_C* GetDefaultObj();

	void GetColorForPathSegment(const struct RouteHistoryComponentPoint_RouteHistoryComponentPoint& StartPoint, const struct RouteHistoryComponentPoint_RouteHistoryComponentPoint& EndPoint, struct CoreUObject_LinearColor* LinearColor, double SpeedPct, bool CallFunc_Less_DoubleDouble_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, const struct CoreUObject_LinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct CoreUObject_LinearColor& CallFunc_LinearColorLerp_ReturnValue_1, double CallFunc_SafeDivide_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, float CallFunc_LinearColorLerp_Alpha_ImplicitCast, float CallFunc_LinearColorLerp_Alpha_ImplicitCast_1, double CallFunc_SafeDivide_B_ImplicitCast);
	void BuildPath(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void DrawPathSegment(int32 PointIndexStart, int32 PointIndexEnd, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct CoreUObject_LinearColor& CallFunc_GetColorForPathSegment_LinearColor);
	void AddRecordPoint(int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, const struct CoreUObject_Vector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct CoreUObject_Vector& CallFunc_GetVelocity_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_VSize_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct RouteHistoryComponentPoint_RouteHistoryComponentPoint& K2Node_MakeStruct_RouteHistoryComponentPoint, int32 CallFunc_Array_LastIndex_ReturnValue_1, int32 CallFunc_Array_LastIndex_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void Command(const class FString& CommandString, bool K2Node_SwitchString_CmpSuccess);
	void ReceiveBeginPlay();
	void StartRecording();
	void StopRecording();
	void Clear();
	void SetRouteHistoryVisualization(enum class ERouteHistoryComponent_VisualizationTypes NewVizualization);
	void ExecuteUbergraph_RouteHistoryComponent(int32 EntryPoint, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_TopazCharacter_C* K2Node_DynamicCast_AsBP_Topaz_Character, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue, enum class ERouteHistoryComponent_VisualizationTypes K2Node_CustomEvent_NewVizualization, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UValCharacterMovementComponent* K2Node_DynamicCast_AsVal_Character_Movement_Component, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_K2_SetTimer_Time_ImplicitCast);
};

}


