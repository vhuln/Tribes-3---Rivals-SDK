#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x310 - 0x308)
// BlueprintGeneratedClass GC_PassiveSelfReviveStun.GC_PassiveSelfReviveStun_C
class AGC_PassiveSelfReviveStun_C : public AGameplayCueNotify_Actor
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x308(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGC_PassiveSelfReviveStun_C* GetDefaultObj();

	bool OnRemove(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, class ABP_ValChar_Master_WithSpline_C* K2Node_DynamicCast_AsBP_Val_Char_Master_with_Spline, bool K2Node_DynamicCast_bSuccess, bool CallFunc_OnRemove_ReturnValue);
	bool OnActive(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, class ABP_ValChar_Master_WithSpline_C* K2Node_DynamicCast_AsBP_Val_Char_Master_with_Spline, bool K2Node_DynamicCast_bSuccess, bool CallFunc_OnActive_ReturnValue);
};

}


