#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2A8 - 0x2A0)
// BlueprintGeneratedClass LobbyMap.LobbyMap_C
class ALobbyMap_C : public ALevelScriptActor
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ALobbyMap_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_LobbyMap(int32 EntryPoint, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UValGameUserSettings* K2Node_DynamicCast_AsVal_Game_User_Settings, bool K2Node_DynamicCast_bSuccess, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, class UValGameUserSettings* K2Node_DynamicCast_AsVal_Game_User_Settings_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


