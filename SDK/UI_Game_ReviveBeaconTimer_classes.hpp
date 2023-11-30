#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x5F8 - 0x5B0)
// WidgetBlueprintGeneratedClass UI_Game_ReviveBeaconTimer.UI_Game_ReviveBeaconTimer_C
class UUI_Game_ReviveBeaconTimer_C : public UValRHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x5B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            BottomText;                                        // 0x5B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ProgressFill;                                      // 0x5C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SideText;                                          // 0x5C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EOrientation                      DefaultTimerOrientation;                           // 0x5D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2304[0x7];                                     // Fixing Size After Last Property  
	class AValGameState_Frontier*                CachedGameState;                                   // 0x5D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AValReviveBeacon*                      CachedReviveBeacon;                                // 0x5E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        DefaultTextSize;                                   // 0x5E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CachedPossibleLifetime;                            // 0x5EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CachedTotalPossibleLifetime;                       // 0x5F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Game_ReviveBeaconTimer_C* GetDefaultObj();

	void SetTrackedBeacon(class AValReviveBeacon* NewBeacon, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetRespawnPossibleLifetime_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_GetServerWorldTimeSeconds_ReturnValue, class AValGameState* CallFunc_GetGameState_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, class AValGameState_Frontier* K2Node_DynamicCast_AsVal_Game_State_Frontier, bool K2Node_DynamicCast_bSuccess, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast);
	void UpdateTimer(int32 Time, class FText CallFunc_Conv_IntToText_ReturnValue);
	void UpdateDefaults(double CallFunc_Conv_IntToDouble_ReturnValue, const struct SlateCore_SlateFontInfo& K2Node_MakeStruct_SlateFontInfo, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_MakeStruct_Size_ImplicitCast);
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct SlateCore_Geometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_UI_Game_ReviveBeaconTimer(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct SlateCore_Geometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_IsValid_ReturnValue, double CallFunc_GetServerWorldTimeSeconds_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_SafeDivide_ReturnValue, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
};

}


