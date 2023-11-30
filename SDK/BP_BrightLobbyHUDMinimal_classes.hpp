#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x4F8 - 0x4F0)
// BlueprintGeneratedClass BP_BrightLobbyHUDMinimal.BP_BrightLobbyHUDMinimal_C
class ABP_BrightLobbyHUDMinimal_C : public AValRHLobbyHUD
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x4F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_BrightLobbyHUDMinimal_C* GetDefaultObj();

	void CallRemoveTopViewRoute(bool ForceTransition, bool* ViewChanged);
	void CallAddViewRoute(class FName RouteName, bool ClearRouteStack, bool ForceTransition, bool* ViewChanged);
};

}


