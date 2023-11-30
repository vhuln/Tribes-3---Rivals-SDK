#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Proximity_Mine.ABP_Proximity_Mine_C
// (None)

class UClass* UABP_Proximity_Mine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Proximity_Mine_C");

	return Clss;
}


// ABP_Proximity_Mine_C ABP_Proximity_Mine.Default__ABP_Proximity_Mine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Proximity_Mine_C* UABP_Proximity_Mine_C::GetDefaultObj()
{
	static class UABP_Proximity_Mine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Proximity_Mine_C*>(UABP_Proximity_Mine_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ABP_Proximity_Mine.ABP_Proximity_Mine_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Engine_PoseLink             AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UABP_Proximity_Mine_C::AnimGraph(struct Engine_PoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Proximity_Mine_C", "AnimGraph");

	Params::UABP_Proximity_Mine_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function ABP_Proximity_Mine.ABP_Proximity_Mine_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Proximity_Mine_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Proximity_Mine_C", "BlueprintUpdateAnimation");

	Params::UABP_Proximity_Mine_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ABP_Proximity_Mine.ABP_Proximity_Mine_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UABP_Proximity_Mine_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Proximity_Mine_C", "BlueprintBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ABP_Proximity_Mine.ABP_Proximity_Mine_C.ExecuteUbergraph_ABP_Proximity_Mine
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Proximity_Mine_C*        K2Node_DynamicCast_AsBP_Proximity_Mine                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_Proximity_Mine_C::ExecuteUbergraph_ABP_Proximity_Mine(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABP_Proximity_Mine_C* K2Node_DynamicCast_AsBP_Proximity_Mine, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ABP_Proximity_Mine_C", "ExecuteUbergraph_ABP_Proximity_Mine");

	Params::UABP_Proximity_Mine_C_ExecuteUbergraph_ABP_Proximity_Mine_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Proximity_Mine = K2Node_DynamicCast_AsBP_Proximity_Mine;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}


