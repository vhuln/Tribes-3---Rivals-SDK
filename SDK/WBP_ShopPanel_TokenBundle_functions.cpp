#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ShopPanel_TokenBundle.WBP_ShopPanel_TokenBundle_C
// (None)

class UClass* UWBP_ShopPanel_TokenBundle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ShopPanel_TokenBundle_C");

	return Clss;
}


// WBP_ShopPanel_TokenBundle_C WBP_ShopPanel_TokenBundle.Default__WBP_ShopPanel_TokenBundle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ShopPanel_TokenBundle_C* UWBP_ShopPanel_TokenBundle_C::GetDefaultObj()
{
	static class UWBP_ShopPanel_TokenBundle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ShopPanel_TokenBundle_C*>(UWBP_ShopPanel_TokenBundle_C::StaticClass()->DefaultObject);

	return Default;
}

}


