#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x320 - 0x308)
// BlueprintGeneratedClass GC_ScannerAlert.GC_ScannerAlert_C
class AGC_ScannerAlert_C : public AGameplayCueNotify_Actor
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x308(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_CharPlayer_C*                      Target_CharPlayer;                                 // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_CharPlayer_Scanner_C*              Instigator_NPC;                                    // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGC_ScannerAlert_C* GetDefaultObj();

	bool OnRemove(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, class ABP_CharPlayer_Scanner_C* K2Node_DynamicCast_AsBP_Char_Player_Scanner, bool K2Node_DynamicCast_bSuccess);
	bool WhileActive(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, class ABP_CharPlayer_Scanner_C* K2Node_DynamicCast_AsBP_Char_Player_Scanner, bool K2Node_DynamicCast_bSuccess);
};

}


