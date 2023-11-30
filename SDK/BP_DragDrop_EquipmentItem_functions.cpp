#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DragDrop_EquipmentItem.BP_DragDrop_EquipmentItem_C
// (None)

class UClass* UBP_DragDrop_EquipmentItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DragDrop_EquipmentItem_C");

	return Clss;
}


// BP_DragDrop_EquipmentItem_C BP_DragDrop_EquipmentItem.Default__BP_DragDrop_EquipmentItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_DragDrop_EquipmentItem_C* UBP_DragDrop_EquipmentItem_C::GetDefaultObj()
{
	static class UBP_DragDrop_EquipmentItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_DragDrop_EquipmentItem_C*>(UBP_DragDrop_EquipmentItem_C::StaticClass()->DefaultObject);

	return Default;
}

}


