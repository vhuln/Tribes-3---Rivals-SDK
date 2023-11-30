#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0xE21 - 0xE18)
// BlueprintGeneratedClass BP_GameState_Frontier.BP_GameState_Frontier_C
class ABP_GameState_Frontier_C : public AValGameState_Frontier
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0xE18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         CachedInProgress;                                  // 0xE20(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_GameState_Frontier_C* GetDefaultObj();

	void UpdateInProgress(bool Value, bool CallFunc_Not_PreBool_ReturnValue);
	void UpdateBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void ReceiveBeginPlay(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void OnMatchState(bool LocalInProgress, bool CallFunc_EqualEqual_NameName_ReturnValue);
};

}


