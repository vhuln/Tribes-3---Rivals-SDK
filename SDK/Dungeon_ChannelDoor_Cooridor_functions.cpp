#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Dungeon_ChannelDoor_Cooridor.Dungeon_ChannelDoor_Cooridor_C
// (Actor)

class UClass* ADungeon_ChannelDoor_Cooridor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Dungeon_ChannelDoor_Cooridor_C");

	return Clss;
}


// Dungeon_ChannelDoor_Cooridor_C Dungeon_ChannelDoor_Cooridor.Default__Dungeon_ChannelDoor_Cooridor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADungeon_ChannelDoor_Cooridor_C* ADungeon_ChannelDoor_Cooridor_C::GetDefaultObj()
{
	static class ADungeon_ChannelDoor_Cooridor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADungeon_ChannelDoor_Cooridor_C*>(ADungeon_ChannelDoor_Cooridor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Dungeon_ChannelDoor_Cooridor.Dungeon_ChannelDoor_Cooridor_C.CacheParent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValDoor*                    LocalParentDoor                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_TimerHandle          CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ReferenceParm)
// class AValDoor*                    K2Node_DynamicCast_AsVal_Door                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_DoorPanel_C*             K2Node_DynamicCast_AsBP_Door_Panel                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_DoorPanel_C*             K2Node_DynamicCast_AsBP_Door_Panel_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADungeon_ChannelDoor_Cooridor_C::CacheParent(class AValDoor* LocalParentDoor, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<class AActor*>& K2Node_MakeArray_Array, class AValDoor* K2Node_DynamicCast_AsVal_Door, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_Array_Get_Item, class ABP_DoorPanel_C* K2Node_DynamicCast_AsBP_Door_Panel, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_Array_Get_Item_1, class ABP_DoorPanel_C* K2Node_DynamicCast_AsBP_Door_Panel_1, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dungeon_ChannelDoor_Cooridor_C", "CacheParent");

	Params::ADungeon_ChannelDoor_Cooridor_C_CacheParent_Params Parms{};

	Parms.LocalParentDoor = LocalParentDoor;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_DynamicCast_AsVal_Door = K2Node_DynamicCast_AsVal_Door;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBP_Door_Panel = K2Node_DynamicCast_AsBP_Door_Panel;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsBP_Door_Panel_1 = K2Node_DynamicCast_AsBP_Door_Panel_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Dungeon_ChannelDoor_Cooridor.Dungeon_ChannelDoor_Cooridor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADungeon_ChannelDoor_Cooridor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dungeon_ChannelDoor_Cooridor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Dungeon_ChannelDoor_Cooridor.Dungeon_ChannelDoor_Cooridor_C.ExecuteUbergraph_Dungeon_ChannelDoor_Cooridor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADungeon_ChannelDoor_Cooridor_C::ExecuteUbergraph_Dungeon_ChannelDoor_Cooridor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Dungeon_ChannelDoor_Cooridor_C", "ExecuteUbergraph_Dungeon_ChannelDoor_Cooridor");

	Params::ADungeon_ChannelDoor_Cooridor_C_ExecuteUbergraph_Dungeon_ChannelDoor_Cooridor_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


