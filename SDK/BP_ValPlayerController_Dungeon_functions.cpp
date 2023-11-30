#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ValPlayerController_Dungeon.BP_ValPlayerController_Dungeon_C
// (Actor, PlayerController)

class UClass* ABP_ValPlayerController_Dungeon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ValPlayerController_Dungeon_C");

	return Clss;
}


// BP_ValPlayerController_Dungeon_C BP_ValPlayerController_Dungeon.Default__BP_ValPlayerController_Dungeon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ValPlayerController_Dungeon_C* ABP_ValPlayerController_Dungeon_C::GetDefaultObj()
{
	static class ABP_ValPlayerController_Dungeon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ValPlayerController_Dungeon_C*>(ABP_ValPlayerController_Dungeon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ValPlayerController_Dungeon.BP_ValPlayerController_Dungeon_C.PossessOtherBot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CharPlayer_Test_C*       BotToPossess                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CharPlayer_Test_C*       ClosestBot                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValPlayerState*             K2Node_DynamicCast_AsVal_Player_State                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_GetPlayerViewPoint_Location                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Rotator         CallFunc_GetPlayerViewPoint_Rotation                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_Vector_Distance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_CharPlayer_Test_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CharPlayer_Test_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Vector_Distance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ValPlayerController_Dungeon_C::PossessOtherBot(class ABP_CharPlayer_Test_C* BotToPossess, class ABP_CharPlayer_Test_C* ClosestBot, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, class AValPlayerState* K2Node_DynamicCast_AsVal_Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct CoreUObject_Vector& CallFunc_GetPlayerViewPoint_Location, const struct CoreUObject_Rotator& CallFunc_GetPlayerViewPoint_Rotation, double CallFunc_Vector_Distance_ReturnValue, TArray<class ABP_CharPlayer_Test_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class ABP_CharPlayer_Test_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_Vector_Distance_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValPlayerController_Dungeon_C", "PossessOtherBot");

	Params::ABP_ValPlayerController_Dungeon_C_PossessOtherBot_Params Parms{};

	Parms.BotToPossess = BotToPossess;
	Parms.ClosestBot = ClosestBot;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_DynamicCast_AsVal_Player_State = K2Node_DynamicCast_AsVal_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetPlayerViewPoint_Location = CallFunc_GetPlayerViewPoint_Location;
	Parms.CallFunc_GetPlayerViewPoint_Rotation = CallFunc_GetPlayerViewPoint_Rotation;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Vector_Distance_ReturnValue_1 = CallFunc_Vector_Distance_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ValPlayerController_Dungeon.BP_ValPlayerController_Dungeon_C.ServerPossessOtherBot
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ValPlayerController_Dungeon_C::ServerPossessOtherBot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValPlayerController_Dungeon_C", "ServerPossessOtherBot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ValPlayerController_Dungeon.BP_ValPlayerController_Dungeon_C.ChangeFlashlightBrightness
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IncreaseBrightness                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ValPlayerController_Dungeon_C::ChangeFlashlightBrightness(bool IncreaseBrightness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValPlayerController_Dungeon_C", "ChangeFlashlightBrightness");

	Params::ABP_ValPlayerController_Dungeon_C_ChangeFlashlightBrightness_Params Parms{};

	Parms.IncreaseBrightness = IncreaseBrightness;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ValPlayerController_Dungeon.BP_ValPlayerController_Dungeon_C.ExecuteUbergraph_BP_ValPlayerController_Dungeon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IncreaseBrightness                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ValPlayerController_Dungeon_C::ExecuteUbergraph_BP_ValPlayerController_Dungeon(int32 EntryPoint, bool K2Node_CustomEvent_IncreaseBrightness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValPlayerController_Dungeon_C", "ExecuteUbergraph_BP_ValPlayerController_Dungeon");

	Params::ABP_ValPlayerController_Dungeon_C_ExecuteUbergraph_BP_ValPlayerController_Dungeon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_IncreaseBrightness = K2Node_CustomEvent_IncreaseBrightness;

	UObject::ProcessEvent(Func, &Parms);

}

}


