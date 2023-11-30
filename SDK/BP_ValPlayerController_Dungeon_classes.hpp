#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x15D0 - 0x15C8)
// BlueprintGeneratedClass BP_ValPlayerController_Dungeon.BP_ValPlayerController_Dungeon_C
class ABP_ValPlayerController_Dungeon_C : public ABP_ValPlayerController_C
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x15C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_ValPlayerController_Dungeon_C* GetDefaultObj();

	void PossessOtherBot(class ABP_CharPlayer_Test_C* BotToPossess, class ABP_CharPlayer_Test_C* ClosestBot, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, class AValPlayerState* K2Node_DynamicCast_AsVal_Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct CoreUObject_Vector& CallFunc_GetPlayerViewPoint_Location, const struct CoreUObject_Rotator& CallFunc_GetPlayerViewPoint_Rotation, double CallFunc_Vector_Distance_ReturnValue, TArray<class ABP_CharPlayer_Test_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class ABP_CharPlayer_Test_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_Vector_Distance_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue);
	void ServerPossessOtherBot();
	void ChangeFlashlightBrightness(bool IncreaseBrightness);
	void ExecuteUbergraph_BP_ValPlayerController_Dungeon(int32 EntryPoint, bool K2Node_CustomEvent_IncreaseBrightness);
};

}


