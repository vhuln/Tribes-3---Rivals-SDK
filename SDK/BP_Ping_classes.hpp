#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x360 - 0x340)
// BlueprintGeneratedClass BP_Ping.BP_Ping_C
class ABP_Ping_C : public AValPing
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Audio_Ping;                                        // 0x348(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Beam;                                              // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Ping_C* GetDefaultObj();

	void On_Referenced_Actor_Destroyed(class AActor* DestroyedActor);
	void OnPlaced(bool bPlacedByLocal, enum class EValPingType Temp_byte_Variable, float Temp_real_Variable, float Temp_real_Variable_1, float Temp_real_Variable_2, float Temp_real_Variable_3, float Temp_real_Variable_4, float Temp_real_Variable_5, float Temp_real_Variable_6, float Temp_real_Variable_7, float Temp_real_Variable_8, float Temp_real_Variable_9, float Temp_real_Variable_10, float Temp_real_Variable_11, float Temp_real_Variable_12, float Temp_real_Variable_13, float Temp_real_Variable_14, float Temp_real_Variable_15, float Temp_real_Variable_16, float Temp_real_Variable_17, float Temp_real_Variable_18, float Temp_real_Variable_19, float Temp_real_Variable_20, float Temp_real_Variable_21, float Temp_real_Variable_22, float Temp_real_Variable_23, float Temp_real_Variable_24, float Temp_real_Variable_25, float Temp_real_Variable_26, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, float K2Node_Select_Default, TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetIntParameter_self_CastInput, TScriptInterface<class IAudioParameterControllerInterface> CallFunc_SetIntParameter_self_CastInput_1);
	void ReceiveBeginPlay();
	void OnDibsCalled();
	void ExecuteUbergraph_BP_Ping(int32 EntryPoint, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double CallFunc_SelectFloat_ReturnValue, float CallFunc_SetLifeSpan_InLifespan_ImplicitCast);
};

}


