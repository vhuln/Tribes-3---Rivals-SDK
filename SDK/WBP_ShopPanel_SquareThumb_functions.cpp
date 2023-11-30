#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ShopPanel_SquareThumb.WBP_ShopPanel_SquareThumb_C
// (None)

class UClass* UWBP_ShopPanel_SquareThumb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ShopPanel_SquareThumb_C");

	return Clss;
}


// WBP_ShopPanel_SquareThumb_C WBP_ShopPanel_SquareThumb.Default__WBP_ShopPanel_SquareThumb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ShopPanel_SquareThumb_C* UWBP_ShopPanel_SquareThumb_C::GetDefaultObj()
{
	static class UWBP_ShopPanel_SquareThumb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ShopPanel_SquareThumb_C*>(UWBP_ShopPanel_SquareThumb_C::StaticClass()->DefaultObject);

	return Default;
}

}


