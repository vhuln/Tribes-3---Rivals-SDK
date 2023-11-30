#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_OverlayHealth.BP_OverlayHealth_C
// (None)

class UClass* UBP_OverlayHealth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_OverlayHealth_C");

	return Clss;
}


// BP_OverlayHealth_C BP_OverlayHealth.Default__BP_OverlayHealth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_OverlayHealth_C* UBP_OverlayHealth_C::GetDefaultObj()
{
	static class UBP_OverlayHealth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_OverlayHealth_C*>(UBP_OverlayHealth_C::StaticClass()->DefaultObject);

	return Default;
}

}


