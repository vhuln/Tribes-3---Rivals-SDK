#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ShopPanel_DLC.WBP_ShopPanel_DLC_C
// (None)

class UClass* UWBP_ShopPanel_DLC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ShopPanel_DLC_C");

	return Clss;
}


// WBP_ShopPanel_DLC_C WBP_ShopPanel_DLC.Default__WBP_ShopPanel_DLC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ShopPanel_DLC_C* UWBP_ShopPanel_DLC_C::GetDefaultObj()
{
	static class UWBP_ShopPanel_DLC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ShopPanel_DLC_C*>(UWBP_ShopPanel_DLC_C::StaticClass()->DefaultObject);

	return Default;
}

}


