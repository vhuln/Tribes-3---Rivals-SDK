#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_LoginBackground_Shared.WBP_LoginBackground_Shared_C
// (None)

class UClass* UWBP_LoginBackground_Shared_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_LoginBackground_Shared_C");

	return Clss;
}


// WBP_LoginBackground_Shared_C WBP_LoginBackground_Shared.Default__WBP_LoginBackground_Shared_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_LoginBackground_Shared_C* UWBP_LoginBackground_Shared_C::GetDefaultObj()
{
	static class UWBP_LoginBackground_Shared_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_LoginBackground_Shared_C*>(UWBP_LoginBackground_Shared_C::StaticClass()->DefaultObject);

	return Default;
}

}


