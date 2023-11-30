#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SD_Door_03.SD_Door_03_C
// (Actor)

class UClass* ASD_Door_03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SD_Door_03_C");

	return Clss;
}


// SD_Door_03_C SD_Door_03.Default__SD_Door_03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASD_Door_03_C* ASD_Door_03_C::GetDefaultObj()
{
	static class ASD_Door_03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASD_Door_03_C*>(ASD_Door_03_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SD_Door_03.SD_Door_03_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASD_Door_03_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SD_Door_03_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SD_Door_03.SD_Door_03_C.ExecuteUbergraph_SD_Door_03
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADungeon_ChannelDoorHard_Cooridor_C*K2Node_DynamicCast_AsDungeon_Channel_Door_Hard_Cooridor          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASD_Door_03_C::ExecuteUbergraph_SD_Door_03(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ADungeon_ChannelDoorHard_Cooridor_C* K2Node_DynamicCast_AsDungeon_Channel_Door_Hard_Cooridor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SD_Door_03_C", "ExecuteUbergraph_SD_Door_03");

	Params::ASD_Door_03_C_ExecuteUbergraph_SD_Door_03_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsDungeon_Channel_Door_Hard_Cooridor = K2Node_DynamicCast_AsDungeon_Channel_Door_Hard_Cooridor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


