#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2EF4 - 0x2ED4)
// BlueprintGeneratedClass BP_CharPlayer_Defender_Dissector.BP_CharPlayer_Defender_Dissector_C
class ABP_CharPlayer_Defender_Dissector_C : public ABP_CharPlayer_Defender_C
{
public:
	uint8                                        Pad_366A[0x4];                                     // Fixing Size After Last Property  
	double                                       CurrentOpacity;                                    // 0x2ED8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              DissectorMIC;                                      // 0x2EE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       OpacityIncreaseAmount;                             // 0x2EE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        AcitveOpacityStacks;                               // 0x2EF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CharPlayer_Defender_Dissector_C* GetDefaultObj();

	void SetOpacityOverride(double Value, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void StopOpacityOverride(int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void StartOpacityOverride(double IncreaseAmount, int32 CallFunc_Add_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_K2_GetScalarParameterValue_ReturnValue, float CallFunc_K2_GetScalarParameterValue_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AActor* CallFunc_GetViewTarget_ReturnValue, const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Lerp_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast);
	void IncreaseOpacity(bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void On_AIFSM_ChaseState_End();
	void On_AIFSM_Chase_State_Start();
	void On_AIFSM_Stalk_State_End();
	void On_AIFSM_Stalk_State_Start();
	void UserConstructionScript(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3);
};

}


