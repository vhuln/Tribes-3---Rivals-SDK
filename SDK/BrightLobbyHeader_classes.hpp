#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x570 - 0x550)
// WidgetBlueprintGeneratedClass BrightLobbyHeader.BrightLobbyHeader_C
class UBrightLobbyHeader_C : public URHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<enum class ERHLoginState>             LoggedOutStates;                                   // 0x558(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class URHLoginDataFactory*                   LoginDataFactory;                                  // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBrightLobbyHeader_C* GetDefaultObj();

	void StartShowSequence(class FName FromRoute, class FName ToRoute);
	void HandleLobbyStartMenuInputAction();
	void StartHideSequence(class FName FromRoute, class FName ToRoute);
	void ExecuteUbergraph_BrightLobbyHeader(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_Event_FromRoute, class FName K2Node_Event_ToRoute, class URHInputManager* CallFunc_GetInputManager_ReturnValue, class ABP_BrightLobbyHUD_C* K2Node_DynamicCast_AsBP_Bright_Lobby_HUD, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Add_View_Route_ViewChanged, class FName K2Node_Event_FromRoute_1, class FName K2Node_Event_ToRoute_1, class URHInputManager* CallFunc_GetInputManager_ReturnValue_1);
};

}


