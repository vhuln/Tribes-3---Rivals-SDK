#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Loot_Crate_Master_Dungeon.BP_Loot_Crate_Master_Dungeon_C
// (Actor)

class UClass* ABP_Loot_Crate_Master_Dungeon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Loot_Crate_Master_Dungeon_C");

	return Clss;
}


// BP_Loot_Crate_Master_Dungeon_C BP_Loot_Crate_Master_Dungeon.Default__BP_Loot_Crate_Master_Dungeon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Loot_Crate_Master_Dungeon_C* ABP_Loot_Crate_Master_Dungeon_C::GetDefaultObj()
{
	static class ABP_Loot_Crate_Master_Dungeon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Loot_Crate_Master_Dungeon_C*>(ABP_Loot_Crate_Master_Dungeon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Loot_Crate_Master_Dungeon.BP_Loot_Crate_Master_Dungeon_C.HideWidgetOnStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Loot_Crate_Master_Dungeon_C::HideWidgetOnStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Loot_Crate_Master_Dungeon_C", "HideWidgetOnStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Loot_Crate_Master_Dungeon.BP_Loot_Crate_Master_Dungeon_C.OnHoverStart
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AValCharacter*               Initiator                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Loot_Crate_Master_Dungeon_C::OnHoverStart(class AValCharacter* Initiator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Loot_Crate_Master_Dungeon_C", "OnHoverStart");

	Params::ABP_Loot_Crate_Master_Dungeon_C_OnHoverStart_Params Parms{};

	Parms.Initiator = Initiator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Loot_Crate_Master_Dungeon.BP_Loot_Crate_Master_Dungeon_C.OnHoverEnd
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AValCharacter*               Initiator                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Loot_Crate_Master_Dungeon_C::OnHoverEnd(class AValCharacter* Initiator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Loot_Crate_Master_Dungeon_C", "OnHoverEnd");

	Params::ABP_Loot_Crate_Master_Dungeon_C_OnHoverEnd_Params Parms{};

	Parms.Initiator = Initiator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Loot_Crate_Master_Dungeon.BP_Loot_Crate_Master_Dungeon_C.ExecuteUbergraph_BP_Loot_Crate_Master_Dungeon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               K2Node_Event_Initiator                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               K2Node_Event_Initiator_1                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Loot_Crate_Master_Dungeon_C::ExecuteUbergraph_BP_Loot_Crate_Master_Dungeon(int32 EntryPoint, class AValCharacter* K2Node_Event_Initiator, class AValCharacter* K2Node_Event_Initiator_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Loot_Crate_Master_Dungeon_C", "ExecuteUbergraph_BP_Loot_Crate_Master_Dungeon");

	Params::ABP_Loot_Crate_Master_Dungeon_C_ExecuteUbergraph_BP_Loot_Crate_Master_Dungeon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Initiator = K2Node_Event_Initiator;
	Parms.K2Node_Event_Initiator_1 = K2Node_Event_Initiator_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


