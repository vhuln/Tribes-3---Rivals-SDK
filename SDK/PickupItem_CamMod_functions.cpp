#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PickupItem_CamMod.PickupItem_CamMod_C
// (None)

class UClass* UPickupItem_CamMod_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PickupItem_CamMod_C");

	return Clss;
}


// PickupItem_CamMod_C PickupItem_CamMod.Default__PickupItem_CamMod_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPickupItem_CamMod_C* UPickupItem_CamMod_C::GetDefaultObj()
{
	static class UPickupItem_CamMod_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPickupItem_CamMod_C*>(UPickupItem_CamMod_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PickupItem_CamMod.PickupItem_CamMod_C.BlueprintModifyPostProcess
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PostProcessBlendWeight                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_PostProcessSettings  PostProcessSettings                                              (Parm, OutParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPickupItem_CamMod_C::BlueprintModifyPostProcess(float DeltaTime, float* PostProcessBlendWeight, struct Engine_PostProcessSettings* PostProcessSettings, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PickupItem_CamMod_C", "BlueprintModifyPostProcess");

	Params::UPickupItem_CamMod_C_BlueprintModifyPostProcess_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PostProcessBlendWeight != nullptr)
		*PostProcessBlendWeight = Parms.PostProcessBlendWeight;

	if (PostProcessSettings != nullptr)
		*PostProcessSettings = std::move(Parms.PostProcessSettings);

}


// Function PickupItem_CamMod.PickupItem_CamMod_C.OnAddedToCamera
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerCameraManager*        Camera                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPickupItem_CamMod_C::OnAddedToCamera(class APlayerCameraManager* Camera)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PickupItem_CamMod_C", "OnAddedToCamera");

	Params::UPickupItem_CamMod_C_OnAddedToCamera_Params Parms{};

	Parms.Camera = Camera;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PickupItem_CamMod.PickupItem_CamMod_C.ExecuteUbergraph_PickupItem_CamMod
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_WeightedBlendable    K2Node_MakeStruct_WeightedBlendable                              (NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct Engine_WeightedBlendable>K2Node_MakeArray_Array                                           (ReferenceParm)
// struct Engine_WeightedBlendables   K2Node_MakeStruct_WeightedBlendables                             (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        K2Node_Event_Camera                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPickupItem_CamMod_C::ExecuteUbergraph_PickupItem_CamMod(int32 EntryPoint, const struct Engine_WeightedBlendable& K2Node_MakeStruct_WeightedBlendable, int32 Temp_int_Array_Index_Variable, TArray<struct Engine_WeightedBlendable>& K2Node_MakeArray_Array, const struct Engine_WeightedBlendables& K2Node_MakeStruct_WeightedBlendables, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerCameraManager* K2Node_Event_Camera, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PickupItem_CamMod_C", "ExecuteUbergraph_PickupItem_CamMod");

	Params::UPickupItem_CamMod_C_ExecuteUbergraph_PickupItem_CamMod_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_WeightedBlendable = K2Node_MakeStruct_WeightedBlendable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_WeightedBlendables = K2Node_MakeStruct_WeightedBlendables;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_Camera = K2Node_Event_Camera;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


