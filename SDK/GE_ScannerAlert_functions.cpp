#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ScannerAlert.GE_ScannerAlert_C
// (None)

class UClass* UGE_ScannerAlert_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ScannerAlert_C");

	return Clss;
}


// GE_ScannerAlert_C GE_ScannerAlert.Default__GE_ScannerAlert_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ScannerAlert_C* UGE_ScannerAlert_C::GetDefaultObj()
{
	static class UGE_ScannerAlert_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ScannerAlert_C*>(UGE_ScannerAlert_C::StaticClass()->DefaultObject);

	return Default;
}

}


